
/*
 * Problem: 1593B Make-it-Divisible-by-25
 * Author: Harold-Finch
 * Date: Wednesday, October 13, 2021 6:50 PM
 * Status: Accepted, 61 ms, 0 bytes
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

int getOO(string x, char b1, char b2) {
	int cnt = 0;
	while(x.size() == x.back() != b2) {
		cnt++;
		x.pop_back();
	}

	if(x.empty()) return INT_MAX;
	x.pop_back();
	while(x.size() == x.back() != b1) {
		cnt++;
		x.pop_back();
	}
	if(x.empty()) return INT_MAX;
	return cnt;
}

int solve() {
	ll n;
	cin >> n;
	
	string s = to_string(n);

	int ans = min(min(getOO(s, '0', '0'), getOO(s, '2', '5')),  min(getOO(s, '5', '0'), getOO(s, '7', '5')));

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