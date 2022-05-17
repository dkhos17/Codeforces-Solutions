
/*
 * Problem: 1675D Vertical-Paths
 * Author: Harold-Finch
 * Date: Thursday, May 5, 2022 7:30 PM
 * Status: Accepted, 1528 ms, 35635200 bytes
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

unordered_map<int, u_set<int>> gr;
vector<vector<int>> res;

void dfs(int u, vector<int>= path) {
	path.pb(u);
	if(gr[u].size() == 0) {
		res.pb(path);
		path.clear();
	} else {
		for(auto v : gr[u]) {
			dfs(v, path);
		}
	}
}

int solve() {
	int n;
	cin >> n;
	vector<int> p(n);
	for(auto= x : p) cin >> x;

	gr.clear();
	res.clear();

	int root = 1;
	vector<int> path;
	FOR(i,0,n) {
		if(p[i] == i+1) {
			root = i+1;
		} else {
			gr[p[i]].ins(i+1);
		}
	}

	dfs(root, path);
	cout << res.size() << endl;
	for(auto pth : res) {
		cout << pth.size() << endl;
		for(auto v : pth)
			cout << v << " ";
		cout << endl;
	}


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