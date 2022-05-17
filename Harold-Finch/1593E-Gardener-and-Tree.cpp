
/*
 * Problem: 1593E Gardener-and-Tree
 * Author: Harold-Finch
 * Date: Wednesday, October 13, 2021 8:39 PM
 * Status: Accepted, 1778 ms, 67481600 bytes
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
unordered_map<int, int> del;

int solve() {
	string s;
	getline(cin, s);
	
	int n,k;
	cin >> n >> k;

	gr.clear();
	del.clear();
	FOR(i,0,n-1) {
		int u,v;
		cin >> u >> v;
		gr[u].ins(v);
		gr[v].ins(u);
	}

	list<pair<int,int>> Q;
	u_set<int> been;

	for(auto kv : gr) {
		if(kv.S.size() == 1) {
			Q.push_back(mp(kv.F,0));
			been.ins(kv.F);
		}
	}
	
	int flag = 0;
	while(!Q.empty()) {
		auto [u,op] = Q.front(); Q.pop_front();
		if(op >= k) {
			flag = 1;
			break;
		}
		for(auto v : gr[u]) {
			del[v]++;
			if(been.count(v) || (gr[v].size() - del[v]) > 1) continue;
			Q.push_back(mp(v, op+1));
			been.ins(v);
		}
	}


	cout << gr.size() - been.size() + Q.size() + flag << endl;
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