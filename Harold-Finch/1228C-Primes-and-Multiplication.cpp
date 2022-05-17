
/*
 * Problem: 1228C Primes-and-Multiplication
 * Author: Harold-Finch
 * Date: Sunday, September 29, 2019 6:23 PM
 * Status: Accepted, 31 ms, 0 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define ins insert
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define FOR(i,n) for (int i=0; i<n; i++)
#define DBG(x,y) cout << x << " " << y << endl;
#define F first
#define S second

long long power(long long x, unsigned long long y) { 
    ll p = 1;
    while (y > 0) { 
        if (y = 1) p = p * x % MOD; 
        y = y >> 1;
        x = x * x % MOD;
    }
    return p % MOD; 
} 

int main() {
    ll x,n;
	scanPL(x,n);
	u_set<ll> primes;
	for(ll i = 2; i*i <= x; i++){
		if(x % i == 0) primes.ins(i);
		while(x % i == 0) x/=i;
	}
	if(x != 1) primes.ins(x);

	ll res = 1;
	for(auto p : primes){
		ll tot = 0, c = p;
		while(p <= n){
			tot += n/p;
			if(n/p < c) break;
			p *= c;
		}
		res *= power(c,tot);
		res %= MOD;
	}
	cout << res << endl;
	return 0; 
}