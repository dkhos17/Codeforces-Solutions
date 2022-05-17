
/*
 * Problem: 1511C Yet-Another-Card-Deck
 * Author: Harold-Finch
 * Date: Monday, April 12, 2021 7:20 PM
 * Status: Accepted, 780 ms, 2560000 bytes
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

map<int, int> clr;

int solve() {
	int n,q;
	cin >> n >> q;
	vector<int> a(n), t(q);
	for(auto= x : a) cin >> x;
	for(auto= x : t) cin >> x;

	FOR(i,0,n) {
		if(clr.count(a[i])) continue;
		clr[a[i]] = i+1;
	}

	FOR(i,0,q) {
		cout << clr[t[i]] << " ";
		for(auto kv : clr) {
			if(kv.S < clr[t[i]]) {
				clr[kv.F]++;
			}
		}
		clr[t[i]] = 1;
	}
	cout << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
	return 0; 
}