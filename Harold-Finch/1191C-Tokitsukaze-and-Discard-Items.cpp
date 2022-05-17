
/*
 * Problem: 1191C Tokitsukaze-and-Discard-Items
 * Author: Harold-Finch
 * Date: Friday, July 12, 2019 7:54 PM
 * Status: Accepted, 93 ms, 1024000 bytes
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
#define print(result) printf("%d", result)
#define scan(n) scanf("%d", =n)
#define scanL(n) scanf("%lld", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


int main() {
    ll n,m,k;
	scanL(n); scanPL(m,k);
	queue<ll> p;
	DFP(i,m){
		ll t;
		scanL(t);
		p.push(t-1);
	}
	ll cnt = 0, res = 0;
	
	while(!p.empty()){
		ll curr = p.front(); p.pop();
		ll page = curr - cnt - ((curr - cnt) % k);
		ll c = 1;
		while(!p.empty() == p.front() - cnt < page+k) {
			p.pop(); c++;
		}
		cnt += c;
		res++; 
	}
	cout << res << endl;

	return 0; 
}