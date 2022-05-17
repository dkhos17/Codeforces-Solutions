
/*
 * Problem: 1627C Not-Assigning
 * Author: Harold-Finch
 * Date: Saturday, January 15, 2022 7:24 PM
 * Status: Accepted, 358 ms, 26624000 bytes
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

unordered_map<int,u_set<int>> gr;
map<pair<int,int>, int> w;

void dfs(int u, int p, int weight) {
	for(auto v : gr[u]) {
		if(v == p) continue;
		w[mp(u, v)] = weight;
		w[mp(v, u)] = weight;
		if(weight == 2) {
			dfs(v, u, 3);	
		} else {
			dfs(v, u, 2);
		}
	}
}

int solve() {
	int n;
	cin >> n;
	gr.clear();
	w.clear();

	vector<pair<int,int>> idx;
	FOR(i,0,n-1) {
		int u,v;
		cin >> u >> v;
		gr[u].ins(v);
		gr[v].ins(u);
		idx.pb(mp(u,v)); 
	}

	int root = 1;
	for(auto= kv : gr) {
		if(kv.S.size() == 1) root = kv.F;
		if(kv.S.size() > 2) {
			return cout << - 1 << endl, 0;
		}
	}

	dfs(root, -1, 2);

	for(auto= e : idx) {
		cout << w[e] << " ";
	}
	cout << endl;

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