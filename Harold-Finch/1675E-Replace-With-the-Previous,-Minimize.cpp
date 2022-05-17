
/*
 * Problem: 1675E Replace-With-the-Previous,-Minimize
 * Author: Harold-Finch
 * Date: Thursday, May 5, 2022 7:52 PM
 * Status: Accepted, 77 ms, 512000 bytes
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
	int n,k;
	string s;
	cin >> n >> k >> s;

	int c = 0;
	unordered_map<char, int> op;

	FOR(i,0,n) {
		if(c == k) break;
		while(c < k == s[i] != 'a') {
			if(op.count(s[i])) break;
			op[s[i]]++;
			s[i]--;
			c++;
		} 
	}


	FOR(i,0,26) {
		char ch = 'a'+i;
		if(op.count(ch)) {
			op[ch] += op[ch-1];
		}
	}

	FOR(i,0,n) {
		s[i] -= op[s[i]];
	}
	cout << s << endl;
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