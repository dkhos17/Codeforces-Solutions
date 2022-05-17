
/*
 * Problem: 1593D1 All-are-Same
 * Author: Harold-Finch
 * Date: Wednesday, October 13, 2021 7:39 PM
 * Status: Accepted, 15 ms, 0 bytes
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
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto= x : v) cin >> x;

	int min_e = *min_element(v.B(), v.E());
	int max_e = *max_element(v.B(), v.E());

	if(min_e == max_e) return cout << -1 << endl, 0;

	FOR(i,0,n) v[i] -= min_e;

	int k = v[0];
	for(int i = 1; i < n; i++) {
		k = __gcd(k, v[i]);
	}
	cout << k << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}