
/*
 * Problem: 1613C Poisoned-Dagger
 * Author: Harold-Finch
 * Date: Wednesday, December 1, 2021 7:24 PM
 * Status: Accepted, 62 ms, 204800 bytes
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


bool check(vector<ll>= a, ll k, ll h) {
	ll dmg = k;
	for(int i = 1; i < a.size(); i++) {
		if(dmg >= h) return true;
		dmg += min(a[i]-a[i-1], k);
	}

	return dmg >= h;
}



int solve() {
	ll n,h;
	cin >> n >> h;
	vector<ll> a(n);
	for(auto= x : a) cin >> x;

	ll ans = LONG_LONG_MAX;
	ll L = 0, R = LONG_LONG_MAX;

	while(L <= R) {
		ll M = (L+R) / 2;

		if(check(a, M, h)) {
			R = M-1;
			ans = min(ans, M);
		} else {
			L = M+1;
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