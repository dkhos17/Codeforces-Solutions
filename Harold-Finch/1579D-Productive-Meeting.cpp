
/*
 * Problem: 1579D Productive-Meeting
 * Author: Harold-Finch
 * Date: Tuesday, September 28, 2021 8:02 PM
 * Status: Accepted, 374 ms, 11673600 bytes
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

pair<int,int> pop(set<pair<int,int>>= all) {
	auto p = *(--all.E());
	all.erase(--all.E());
	return p;
}


int solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	vector<vector<int>> res;
	set<pair<int,int>> all;
	FOR(i,0,n) {
		all.ins(mp(a[i],i+1));
	}

	ll k = 0;
	map<pair<int,int>,int> cnt;
	while(all.size() > 1) {
		auto p1 = pop(all);		
		auto p2 = pop(all);
	
		if(p1.F == 0 || p2.F == 0) break;
		if(p2.F) {
			cnt[mp(p1.S,p2.S)]++;
			k++;
			p1.F--;
			p2.F--;
			if(p1.F) all.ins(p1);
			if(p2.F) all.ins(p2);
		}
	}

	cout << k << endl;
	for(auto kv : cnt) {
		FOR(i,0,kv.S) {
			cout << kv.F.F << " " << kv.F.S << endl;
		}
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