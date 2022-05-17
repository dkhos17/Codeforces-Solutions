
/*
 * Problem: 1658A Marin-and-Photoshoot
 * Author: Harold-Finch
 * Date: Sunday, March 27, 2022 6:43 PM
 * Status: Accepted, 15 ms, 0 bytes
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
	string s;
	cin >> n >> s;

	int ans = 0;
	FOR(i,1,n) {
		if(s[i-1] == '0' == s[i] == '0') ans += 2;
	}

	FOR(i,2,n) {
		if(s[i-2] == '0' == s[i-1] == '1' == s[i] == '0') ans++;
	}

	cout << ans << endl;
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