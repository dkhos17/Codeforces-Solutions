
/*
 * Problem: 1148B Born-This-Way
 * Author: Harold-Finch
 * Date: Saturday, June 1, 2019 8:14 PM
 * Status: Accepted, 155 ms, 3174400 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
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


int main() {
    ll n,m;
	scanPL(n,m);
	ll ta,tb;
	scanPL(ta,tb);
	ll k;
	scanf("%lld", =k);

	vector<ll> A(n), B(m);
	DFP(i,n){
		scanf("%lld", =A[i]);
	}

	DFP(j,m){
		scanf("%lld", =B[j]);
	}
	if(k >= n || k >= m) return cout << -1 << endl, 0;

	ll res = 0;
	for(int i = 0; i <= k; i++){
		auto it = upper_bound(B.begin(),B.end(), A[i]+ta-1);
		auto itb = lower_bound(B.begin(),B.end(), A[i]+ta);
		if(itb == B.end()) return cout << -1 << endl, 0;
		int idb = itb-B.begin();
		idb += (k-i);
		if(idb >= m) return cout << -1 << endl, 0;
		res = max(res, B[idb]+tb);
	}
	cout << res << endl;
	return 0; 
}