
/*
 * Problem: 1633B Minority
 * Author: Harold-Finch
 * Date: Monday, January 31, 2022 6:46 PM
 * Status: Accepted, 15 ms, 512000 bytes
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

	int one = 0, zero = 0, ans = 0;
	FOR(i,0,s.size()) {
		if(s[i] == '0') zero++;
		else one++;
		if(zero > one) {
			ans = max(ans, one);
		} else if(one > zero) {
			ans = max(ans, zero);
		}
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