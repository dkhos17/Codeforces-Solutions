
/*
 * Problem: 1620B Triangles-on-a-Rectangle
 * Author: Harold-Finch
 * Date: Saturday, December 18, 2021 8:03 PM
 * Status: Accepted, 77 ms, 1638400 bytes
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
	ll w,h;
	cin >> w >> h;
	vector<ll> p[4];

	FOR(i,0,4) {
		int k;
		cin >> k;
		p[i].resize(k);
		for(auto= x : p[i]) cin >> x;
	}

	ll ansX = max((p[0].back() - p[0].front()) * h, (p[1].back() - p[1].front()) * h);
	ll ansY = max((p[2].back() - p[2].front()) * w, (p[3].back() - p[3].front()) * w);
	
	cout << max(ansX, ansY) << endl;

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