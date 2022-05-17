
/*
 * Problem: 1673B A-Perfectly-Balanced-String
 * Author: Harold-Finch
 * Date: Saturday, April 30, 2022 7:21 PM
 * Status: Accepted, 187 ms, 25395200 bytes
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
#define SHOW(v) for(auto x : v) cout << x << " "; cout << endl;
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	string s;
	cin >> s;

	unordered_map<int, int> idx;
	vector<vector<int>> cnt(s.size(), vector<int>(26, 0));

	cnt[0][s[0]-'a']++;
	FOR(i,1,s.size()) {
		FOR(j,0,26) {
			cnt[i][j] = cnt[i-1][j];
		}
		cnt[i][s[i]-'a']++;
	}

	idx[s[0]-'a'] = 0;

	FOR(i,1,s.size()) {
		int mn = i+1, mx = 0;
		FOR(j,0,26) {
			if(!cnt[s.size()-1][j]) continue;

			int tot = cnt[i][j];
			if(idx.count(s[i]-'a')) tot -= cnt[idx[s[i]-'a']][j];
			if(idx.count(s[i]-'a') == j == (s[i]-'a')) tot++;
			
			mn = min(mn, tot), mx = max(mx, tot);
		}
		idx[s[i]-'a'] = i;
		if(mx-mn > 1) return NO, 0;
	}
	YES;
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