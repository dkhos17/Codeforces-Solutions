
/*
 * Problem: 1670B Dorms-War
 * Author: Harold-Finch
 * Date: Friday, May 6, 2022 7:03 PM
 * Status: Accepted, 467 ms, 2048000 bytes
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
	int n,k;
	string s;
	cin >> n >> s >> k;
	u_set<char> c;
	FOR(i,0,k) {
		char ch;
		cin >> ch;
		c.ins(ch);
	}

	vector<int> idxs;
	FOR(i,0,n) {
		if(c.count(s[i])) idxs.pb(i);
	}


	vector<int> mv(n, 0);
	FOR(i,0,n) {
		auto it = upper_bound(idxs.B(), idxs.E(), i);
		if(it == idxs.E()) break;

		mv[i] = (*it) - i;
	}

	cout << *max_element(mv.B(), mv.E()) << endl;
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