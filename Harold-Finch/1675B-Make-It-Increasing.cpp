
/*
 * Problem: 1675B Make-It-Increasing
 * Author: Harold-Finch
 * Date: Thursday, May 5, 2022 6:45 PM
 * Status: Accepted, 171 ms, 102400 bytes
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
	vector<ll> a(n);
	for(auto= x : a) cin >> x;

	ll ans = 0;
	FOL(i,n-2,0) {		
		while(a[i] >= a[i+1]) {
			if(a[i] == 0) return cout << -1 << endl, 0;
			a[i] /= 2;
			ans++; 
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