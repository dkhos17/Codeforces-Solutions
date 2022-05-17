
/*
 * Problem: 1613A Long-Comparison
 * Author: Harold-Finch
 * Date: Wednesday, December 1, 2021 6:47 PM
 * Status: Accepted, 62 ms, 0 bytes
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
	int p1,p2;
	string X1,X2;
	cin >> X1 >> p1 >> X2 >> p2;

	if(X1.size() + p1 > X2.size() + p2) {
		return cout << ">" << endl, 0;
	}

	
	if(X1.size() + p1 < X2.size() + p2) {
		return cout << "<" << endl, 0;
	}

	int mn = min(X1.size(), X2.size());
	int mx = max(X1.size(), X2.size());
	FOR(i,0,mx) {
		if(i < mn == X1[i] > X2[i]) {
			return cout << ">" << endl, 0;
		}
		if(i < mn == X1[i] < X2[i]) {
			return cout << "<" << endl, 0;
		}

		if(i >= mn == i < X1.size() == X1[i] > '0') {
			return cout << ">" << endl, 0;
		}
		if(i >= mn == i < X2.size() == X2[i] > '0') {
			return cout << "<" << endl, 0;
		}
	}

	cout << "=" << endl;
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