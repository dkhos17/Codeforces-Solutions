
/*
 * Problem: 1633C Kill-the-Monster
 * Author: Harold-Finch
 * Date: Monday, January 31, 2022 6:56 PM
 * Status: Accepted, 217 ms, 0 bytes
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

bool can_beat(ll Hc, ll Dc, ll Hm , ll Dm) {
	ll c = (Hm + Dc - 1) / Dc;
	ll m = (Hc + Dm - 1) / Dm;
	return c <= m;
}

int solve() {
	ll Hc,Hm,Dc,Dm,k,w,a;
	cin >> Hc >> Dc >> Hm >> Dm >> k >> w >> a;

	if(can_beat(Hc, Dc, Hm, Dm))
		return YES, 0;

	FOR(i,0,k+1) {
		if(can_beat(Hc + (k - i)*a, Dc + i*w, Hm, Dm))
			return YES, 0;
	}
	NO;
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