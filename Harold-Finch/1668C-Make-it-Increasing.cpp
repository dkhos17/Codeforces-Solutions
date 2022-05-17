
/*
 * Problem: 1668C Make-it-Increasing
 * Author: Harold-Finch
 * Date: Tuesday, April 19, 2022 7:41 PM
 * Status: Accepted, 405 ms, 102400 bytes
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

ll ans = LONG_LONG_MAX;

ll get(int idx, vector<int>= a) {
	ll ops = 0;
	vector<unsigned ll> b(a.size(), 0);
	FOR(i,idx+1,a.size()) {
		ll op = b[i-1] / a[i] + 1;
		b[i] = op*a[i];
		ops += op;
		if(ops > ans) return LONG_LONG_MAX;
	}

	FOL(i,idx-1,0) {
		ll op = b[i+1] / a[i] + 1;
		b[i] = op*a[i];
		ops += op;
		if(ops > ans) return LONG_LONG_MAX;
	}

	return ops;
}

int solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	if(n == 2) return cout << 1 << endl, 0;

	FOR(i,0,n) {
		ans = min(ans, get(i, a));
	}
	cout << ans << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
	return 0; 
}