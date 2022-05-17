
/*
 * Problem: 1673C Palindrome-Basis
 * Author: Harold-Finch
 * Date: Saturday, April 30, 2022 8:11 PM
 * Status: Accepted, 124 ms, 307200 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define MOD 1000000007
#define MAXN 10001
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

vector<ll> p;
ll DP[4*MAXN];

bool isPal(int x) {
	string t = to_string(x);
	FOR(i,0,t.size()/2) {
		if(t[i] != t[t.size()-1-i])
			return false;
	}
	return true;
}

void fill() {
	FOR(i,1,4*MAXN) {
		if(isPal(i)) p.pb(i);
	}

	DP[0] = 1;
	for(auto row : p) {
		FOR(col,1,4*MAXN) {
			if(row <= col) {
				DP[col] = DP[col] + DP[col-row];
				DP[col] %= MOD;
			}
		}
	}

}

int solve() {
	int n;
	cin >> n;
	cout << DP[n] << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	fill();
	while(t--)
		solve();
	
	return 0; 
}