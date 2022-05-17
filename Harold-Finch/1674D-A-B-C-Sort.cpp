
/*
 * Problem: 1674D A-B-C-Sort
 * Author: Harold-Finch
 * Date: Monday, May 2, 2022 7:22 PM
 * Status: Accepted, 77 ms, 2457600 bytes
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
	int n;
	cin >> n;
	vector<int> a(n),b,c;
	for(auto= x : a) cin >> x;

	FOR(i,0,n) {
		if((a.size()-i) % 2 == 0) {
			c.pb(min(a[i], a[i+1]));
		} else {
			if(i) c.pb(max(a[i], a[i-1]));
			else c.pb(a[i]);
		}
	}

	FOR(i,1,n) {
		if(c[i] < c[i-1]) return NO, 0;
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