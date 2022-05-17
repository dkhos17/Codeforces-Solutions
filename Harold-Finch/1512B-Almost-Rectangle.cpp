
/*
 * Problem: 1512B Almost-Rectangle
 * Author: Harold-Finch
 * Date: Saturday, April 10, 2021 6:59 PM
 * Status: Accepted, 15 ms, 409600 bytes
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
	int n;
	cin >> n;
	vector<string> v(n);
	for(auto= x : v) cin >> x;

	auto p1 = mp(-1,-1);
	auto p2 = mp(-1,-1);
	map<pair<int,int>, char> m;
	FOR(i,0,n) {
		FOR(j,0,n) {
			if(v[i][j] == '*') {
				if(p1.F == -1) {
					p1 = mp(i,j);
				} else {
					p2 = mp(i,j);
				}
			}
		}
	}
	m[p1] = '*';
	m[p2] = '*';
	
	if(p1.F == p2.F) {
		if(p1.F > 0) {
			m[mp(0, p1.S)] = '*';
			m[mp(0, p2.S)] = '*';
		} else {
			m[mp(1, p1.S)] = '*';
			m[mp(1, p2.S)] = '*';
		}
	} else if(p1.S == p2.S) {
		if(p1.S > 0) {
			m[mp(p1.F, 0)] = '*';
			m[mp(p2.F, 0)] = '*';
		} else {
			m[mp(p1.F, 1)] = '*';
			m[mp(p2.F, 1)] = '*';
		}
	} else {
		m[mp(min(p1.F, p2.F), min(p1.S, p2.S))];
		m[mp(max(p1.F, p2.F), max(p1.S, p2.S))];
		m[mp(min(p1.F, p2.F), max(p1.S, p2.S))];
		m[mp(max(p1.F, p2.F), min(p1.S, p2.S))];
	}

	FOR(i,0,n) {
		FOR(j,0,n) {
			if(m.count(mp(i,j))) cout << "*";
			else cout << ".";
		}
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