
/*
 * Problem: 1499C Minimum-Grid-Path
 * Author: Harold-Finch
 * Date: Thursday, March 18, 2021 7:37 PM
 * Status: Accepted, 93 ms, 4198400 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define MOD 1e9+7
#define MAXN 100001
#define Pq priority_queue
#define u_set unordered_set
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define FOR(i,from,to) for(int i=from; i<to; i++)
#define FOL(i,from,to) for(int i=from; i>=to; i--)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	ll n;
	cin >> n;
	vector<ll> c(n);
	for(auto= x : c) cin >> x;

	multiset<ll> up, right;
	FOR(i,0,n) {
		if(i%2) up.ins(c[i]);
		else right.ins(c[i]);
	}

	ll sum_up = 0, sum_right = 0;
	for(auto x : up) sum_up += x;
	for(auto x : right) sum_right += x;

	ll ans = n*c[0] + n*c[1];
	FOL(i,n,2) {
		ll res_up = sum_up + (*up.B())*(n - up.size());
		ll res_right = sum_right + (*right.B())*(n - right.size());
		
		// for(auto x : up)
		// 	cout << x << " ";
		// cout << ": "<< endl << res_up << endl;

		
		// for(auto x : right)
		// 	cout << x << " ";
		// cout << ": "<< endl << res_right << endl;

		ans = min(ans, res_up + res_right);

		if(i%2==0) up.erase(up.find(c[i-1])), sum_up -= c[i-1];
		else right.erase(right.find(c[i-1])), sum_right -= c[i-1];
	}
	cout << ans << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}