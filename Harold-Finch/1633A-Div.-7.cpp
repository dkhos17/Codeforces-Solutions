
/*
 * Problem: 1633A Div.-7
 * Author: Harold-Finch
 * Date: Monday, January 31, 2022 6:39 PM
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

	vector<string> v;

int solve() {
	string n;
	cin >> n;

	

	int mn = 4;
	string ans = "";
	for(auto x : v) {
		if(x.size() != n.size()) continue;

		int r = 0;
		FOR(i,0,n.size()) {
			if(x[i] != n[i]) r++;
		}
		if(r < mn) {
			mn = r;
			ans = x;
		}
	}
	cout << ans << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	FOR(i,1,1000) {
		if(i % 7 == 0) v.pb(to_string(i));
	}
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}