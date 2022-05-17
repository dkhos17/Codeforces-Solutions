
/*
 * Problem: 1499B Binary-Removals
 * Author: Harold-Finch
 * Date: Thursday, March 18, 2021 8:29 PM
 * Status: Accepted, 31 ms, 102400 bytes
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	string s;
	cin >> s;

	set<int> one, zero;

	FOR(i,1,s.size()) {
		if(s[i] == s[i-1]) {
			if(s[i] == '1') one.ins(i);
			else zero.ins(i);
		}
	}

	for(auto x : one) {
		if(zero.lower_bound(x) != zero.end()) 
			return cout << "NO" << endl, 0;
	}

	cout << "YES" << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}