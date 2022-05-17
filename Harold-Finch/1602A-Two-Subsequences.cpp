
/*
 * Problem: 1602A Two-Subsequences
 * Author: Harold-Finch
 * Date: Monday, October 25, 2021 10:45 AM
 * Status: Accepted, 15 ms, 1228800 bytes
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

	int i_a = 0;
	string a = ""; a += s[0];
	string b = "";

	FOR(i,0,s.size()) {
		if(s[i] < a[0]) {
			a[0] = s[i];
			i_a = i;
		}
	}

	FOR(i,0,s.size()) {
		if(i == i_a) continue;
		b += s[i];
	}

	cout << a << " " << b << endl;
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