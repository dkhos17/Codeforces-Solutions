
/*
 * Problem: 1506B Partial-Replacement
 * Author: Harold-Finch
 * Date: Thursday, March 25, 2021 7:02 PM
 * Status: Accepted, 31 ms, 0 bytes
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
	int n,k;
	string s;
	cin >> n >> k >> s;

	int b = 0, e = 0, c = 0;
	FOR(i,0,n) {
		if(s[i] == '*') {
			b = i;
			break;
		}
	}

	FOL(i,n-1,0) {
		if(s[i] == '*') {
			e = i;
			break;
		}
	}

	if(b == e) {
		return cout << 1 << endl, 0;
	}

	int ans = 2; c = b;
	FOR(i,b+1,e) {
		if(b+k >= e) break;
		if(s[i] == '*') c = i;
		if(i - b >= k) {
			ans++;
			b = c;
		}
	}
	cout << ans << endl;
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