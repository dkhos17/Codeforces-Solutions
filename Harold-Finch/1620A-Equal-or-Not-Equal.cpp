
/*
 * Problem: 1620A Equal-or-Not-Equal
 * Author: Harold-Finch
 * Date: Saturday, December 18, 2021 7:53 PM
 * Status: Accepted, 15 ms, 102400 bytes
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
	vector<int> v(s.size(), 0);

	int n = 0;

	FOR(i,0,s.size()) {
		if(s[i] == 'N') {
			n++;
		}
	}
	if(n == 1) NO;
	else YES;
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