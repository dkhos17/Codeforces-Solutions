
/*
 * Problem: 1673A Subtle-Substring-Subtraction
 * Author: Harold-Finch
 * Date: Saturday, April 30, 2022 6:43 PM
 * Status: Accepted, 139 ms, 512000 bytes
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
	string s;
	cin >> s;
	
	int tot = 0;
	FOR(i,0,s.size()) {
		tot += (s[i] - 'a') + 1;
	}


	if(s.size() % 2) {
		int p1 = (s.back()-'a') +1;
		int p2 = (s.front()-'a') +1;
		tot = tot - 2*min(p1, p2);
	}
	if(tot > 0) cout << "Alice " << tot << endl;
	else cout << "Bob " << -tot << endl;

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