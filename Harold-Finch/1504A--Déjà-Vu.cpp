
/*
 * Problem: 1504A -Déjà-Vu
 * Author: Harold-Finch
 * Date: Saturday, April 3, 2021 6:43 PM
 * Status: Accepted, 93 ms, 1024000 bytes
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
	string s;
	cin >> s;

	int n = s.size();
	FOR(i,0,n) {
		if(s[n-i-1] != 'a') {
			YES;
			FOR(j,0,i) cout << s[j];
			cout << 'a';
			FOR(j,i,n) cout << s[j];
			cout << endl;
			return 0;
		}
	}
	NO;
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