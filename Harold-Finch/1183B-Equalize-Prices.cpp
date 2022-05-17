
/*
 * Problem: 1183B Equalize-Prices
 * Author: Harold-Finch
 * Date: Wednesday, June 26, 2019 7:02 PM
 * Status: Accepted, 15 ms, 0 bytes
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
    int q;
	scan(q);
	while(q--){
		int n,k;
		scanP(n,k);
		vector<ll> v(n);
		ll mn = INT_MAX, mx = INT_MIN;
		DFP(i,n){
			scanL(v[i]);
			mn = min(mn, v[i]);
			mx = max(mx, v[i]);
		}
		if(abs(mx-mn) > 2*k) cout << -1 << endl;
		else cout << mn+k << endl; 
	}
	return 0; 
}