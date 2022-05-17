
/*
 * Problem: 1592A Gamer-Hemose
 * Author: Harold-Finch
 * Date: Sunday, October 3, 2021 6:41 PM
 * Status: Accepted, 109 ms, 3891200 bytes
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
	ll n, H;
	cin >> n >> H;
	vector<ll> a(n);
	for(auto= x : a) cin >> x;

	sort(a.B(),a.E());

	ll ans = H/(a[n-1] + a[n-2]);

	ll rest = H % (a[n-1] + a[n-2]);
	ans *= 2;
	
	if(rest) {
		if(rest <= a[n-1]) ans++;
		else ans+=2;
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