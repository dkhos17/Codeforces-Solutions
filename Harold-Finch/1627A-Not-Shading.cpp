
/*
 * Problem: 1627A Not-Shading
 * Author: Harold-Finch
 * Date: Saturday, January 15, 2022 6:41 PM
 * Status: Accepted, 15 ms, 204800 bytes
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
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	vector<string> gr;
	bool flag = true;
	FOR(i,0,n) {
		string t;
		cin >> t;
		gr.pb(t);
		if(t.find('B') != string::npos) flag = false;
	}

	if(flag) return cout << -1 << endl, 0;

	if(gr[r-1][c-1] == 'B') {
		return cout << 0 << endl, 0;
	}

	FOR(i,0,m) {
		if(gr[r-1][i] == 'B') return cout << 1 << endl, 0;
	}

	
	FOR(i,0,n) {
		if(gr[i][c-1] == 'B') return cout << 1 << endl, 0;
	}

	cout << 2 << endl;
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