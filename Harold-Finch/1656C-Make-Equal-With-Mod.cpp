
/*
 * Problem: 1656C Make-Equal-With-Mod
 * Author: Harold-Finch
 * Date: Thursday, March 24, 2022 7:00 PM
 * Status: Accepted, 78 ms, 2764800 bytes
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
	cin >> n;
	vector<int> v(n);
	u_set<int> all;
	bool zr = false, on = false;
	for(auto= x : v) {
		cin >> x;
		if(x == 0) zr = true;
		if(x == 1) on = true;
		all.ins(x);
	}

	if(zr == on) return NO, 0;
	if(!on) return YES, 0;
	for(auto x : v) {
		if(all.count(x-1)) {
			return NO, 0;
		}
	}
	YES;
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