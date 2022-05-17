
/*
 * Problem: 1665C Tree-Infection
 * Author: Harold-Finch
 * Date: Friday, April 8, 2022 7:58 PM
 * Status: Accepted, 156 ms, 13004800 bytes
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
unordered_map<int,int> inf;

int solve() {
	int n;
	cin >> n;
	vector<int> p(n-1);
	for(auto= x : p) cin >> x;

	gr.clear(); inf.clear();
	FOR(i,0,n-1) {
		inf[p[i]]++;
	}

	set<pair<int,int>> all;

	for(auto kv : inf) {
		all.ins(mp(-kv.S, kv.F));
	}

	vector<int> chs;
	int ans = all.size();

	while(all.size()) {
		auto p = *all.B();
		all.erase(all.B());

		chs.pb(-p.F);
	}


	multiset<int> ms;
	FOR(i,0,chs.size()) {
		chs[i] = max(0, chs[i] - (ans-i));
		if(chs[i]) ms.ins(-chs[i]);
	}

	int t = 1;
	while(ms.size()) {
		auto p = *ms.B();
		ms.erase(ms.B());
		if(p+t >= 0) continue;

		p++;
		t++;
		if(p+t < 0) ms.ins(p);

	}

	cout << ans+1+t-1 << endl;
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