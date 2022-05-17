
/*
 * Problem: 1671C Dolce-Vita
 * Author: Harold-Finch
 * Date: Friday, April 22, 2022 8:05 PM
 * Status: Accepted, 93 ms, 4812800 bytes
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


bool check(vector<ll>= p, ll M, ll x, ll day) {
	if(M <= 0) return false;
	return (p[M-1] + day*M) <= x;
} 

bool checkD(vector<ll>= p, ll MD, ll x, ll day, ll buy) {
	return x >= p[buy-1] + (day+MD-1)*buy;
}

int solve() {
	int n,x;
	cin >> n >> x;
	vector<ll> a(n);
	for(auto= x : a) cin >> x;

	sort(a.B(), a.E());
	vector<ll> p;

	p.pb(a[0]);
	FOR(i,1,n) {
		ll c = p[i-1] + a[i];
		if(c > x) break;
		p.pb(c);
	}

	ll ans = 0, day = 0;
	ll L = 1, R = p.size();
	while(true) {
		ll buy = 0;
		L = 1;
		while(L <= R) {
			ll M = (L+R)/2;
			if(check(p, M, x, day)) {
				L = M+1;
				buy = max(buy, M);
			} else {
				R = M-1;
			}
		}
		if(buy == 0) break;
		int LD = 1, RD = x - p[0];
		int DD = 1;
		while(LD <= RD) {
			int MD = (LD + RD)/2;
			if(checkD(p, MD, x, day, buy)) {
				LD = MD+1;
				DD = max(DD, MD);
			} else {
				RD = MD-1;
			}
		}

		day += DD;
		ans += DD*buy;
		R = buy;
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