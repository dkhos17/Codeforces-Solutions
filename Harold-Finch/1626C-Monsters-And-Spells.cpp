
/*
 * Problem: 1626C Monsters-And-Spells
 * Author: Harold-Finch
 * Date: Sunday, January 16, 2022 7:25 PM
 * Status: Accepted, 46 ms, 102400 bytes
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
	int n;
	cin >> n;
	vector<int> k(n), h(n);
	for(auto= x : k) cin >> x;
	for(auto= x : h) cin >> x;

	vector<int> dp(n+1, 0);

	vector<pair<ll,ll>> all;

	FOR(i,0,n) {
		all.pb(mp(k[i] - h[i] + 1, k[i]));
	}
	sort(all.B(), all.E());

	ll ans = 0;
	ll st = all[0].F, ed = all[0].S;
	FOR(i,1,n) {
		if(all[i].F <= ed) {
			ed = max(ed, all[i].S);
		} else {
			ans += (ed-st+1)*(ed-st+2)/2;
			st = all[i].F;
			ed = all[i].S;
		}
	}

	ans += (ed-st+1)*(ed-st+2)/2;
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