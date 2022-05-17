
/*
 * Problem: 1671A String-Building
 * Author: Harold-Finch
 * Date: Friday, April 22, 2022 6:39 PM
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
#define SHOW(v) for(auto x : v) cout << x << " "; cout << endl;
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second


int solve() {
	string s;
	cin >> s;

	if(s.size() <= 1) return NO, 0;

	int A = s[0] == 'a';
	int B = s[0] == 'b';
	FOR(i,1,s.size()) {
		if(s[i] == 'a') {
			if(B == 1) return NO, 0;
			B = 0;
			A++;
		} else {
			if(A == 1) return NO, 0;
			B++;
			A = 0;
		}
	}
	if(A == 1 || B == 1) return NO, 0;
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