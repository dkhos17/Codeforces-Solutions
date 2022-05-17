
/*
 * Problem: 1197C Array-Splitting
 * Author: Harold-Finch
 * Date: Monday, July 22, 2019 8:43 PM
 * Status: Accepted, 280 ms, 12288000 bytes
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
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


int main() {
	int n,k;
	scanP(n,k);
	vector<ll> v(n);
	DFP(i,n){
		scanf("%lld", =v[i]);
	}
	if(n == k) return cout << 0 << endl, 0;
	ll res = v[n-1]-v[0];
	multiset<ll> difs;
	for(int i = 0; i < n-1; i++){
		difs.ins(v[i]-v[i+1]);
	}

	for(int i = 0; i < k-1; i++){
		if(difs.size() > 0){
			res += (*difs.begin());
			difs.erase(difs.begin());
		}
	}
	cout << res << endl;
	return 0; 
}