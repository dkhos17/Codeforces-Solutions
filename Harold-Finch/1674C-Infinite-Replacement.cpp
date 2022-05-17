
/*
 * Problem: 1674C Infinite-Replacement
 * Author: Harold-Finch
 * Date: Monday, May 2, 2022 6:58 PM
 * Status: Accepted, 46 ms, 102400 bytes
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

ll P[64];

int solve() {
	string s, t;
	cin >> s >> t;

	if(t.find('a') == string::npos) return cout << P[s.size()] << endl, 0;

	if(t == "a") return cout << 1 << endl, 0;

	cout << -1 << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;

	P[0] = 1;
	FOR(i,1,64) {
		P[i] = P[i-1]*2;
	}

	while(t--)
		solve();
	
	return 0; 
}