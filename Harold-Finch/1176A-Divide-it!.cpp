
/*
 * Problem: 1176A Divide-it!
 * Author: Harold-Finch
 * Date: Sunday, June 9, 2019 6:41 PM
 * Status: Accepted, 30 ms, 0 bytes
 * Language: GNU C++14
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
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


void solve(ll n){
	ll res = 0;
	while(n != 1){
		while(n % 2 == 0){
			res++;
			n /= 2;
		}
		if(n == 1) break;
		if(n % 3 == 0){
			res++;
			n = 2*n/3;
		}else if(n % 5 == 0){
			res++;
			n = 4*n/5;
		}else {
			cout << -1 << endl;
			return;
		}
	}
	cout << res << endl;
}

int main() {
	int q;
	scan(q);
	while(q--){
		ll n;
		scanf("%lld", =n);
		solve(n);
	}
	return 0; 
}