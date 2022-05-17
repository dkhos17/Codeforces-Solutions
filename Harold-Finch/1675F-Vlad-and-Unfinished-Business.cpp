
/*
 * Problem: 1675F Vlad-and-Unfinished-Business
 * Author: Harold-Finch
 * Date: Thursday, May 5, 2022 9:19 PM
 * Status: Accepted, 608 ms, 49971200 bytes
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

unordered_map<int, u_set<int>> gr;
unordered_map<int, int> been, moves;
vector<int> way;
int ans = 0;

int dfs2(int u, u_set<int>= vis) {
	if(been[u]) return 0;
	been[u] = 1;

	int tot = 0;
	for(auto v : gr[u]) {
		int m = dfs2(v, vis);
		if(m) tot += 2*(m-moves[u]);
	}

	ans += tot;
	return (tot || vis.count(u)) ? moves[u] : 0;
}

void dfs1(int u, int mov) {
	if(been[u]) return;
	been[u] = 1;

	for(auto v : gr[u]) {
		dfs1(v, mov+1);
	}

	been[u] = 0;
	moves[u] = mov;
}

void dfs(int u, int dst, vector<int>= path) {
	path.pb(u);
	if(u == dst) {
		way = path;
		return;
	}
	been[u] = 1;
	for(auto v : gr[u]) {
		if(!been[v]) dfs(v, dst, path);
	}
	path.pop_back();
}

int solve() {
	int n,k,x,y;
	cin >> n >> k >> x >> y;
	vector<int> a(k);
	for(auto= xx : a) cin >> xx;

	gr.clear();
	been.clear();
	way.clear();
	FOR(i,0,n-1) {
		int u,v;
		cin >> u >> v;
		gr[u].ins(v);
		gr[v].ins(u);
	}

	vector<int> path;
	dfs(x, y, path);

	u_set<int> vis;
	for(auto xx : a) {
		vis.ins(xx);
	}

	been.clear();

	ans = way.size()-1;
	for(auto v : way) {
		been[v] = 1;
	}

	for(auto v : way) {
		been[v] = 0;
		dfs1(v, 0);
		dfs2(v, vis);
	}

	cout << ans << endl;
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