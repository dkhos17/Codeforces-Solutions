
/*
 * Problem: 1671B Consecutive-Points-Segment
 * Author: Harold-Finch
 * Date: Friday, April 22, 2022 7:01 PM
 * Status: Accepted, 93 ms, 819200 bytes
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
	vector<int> v(n);
	for(auto= x : v) cin >> x;

	if(n == 1) return YES, 0;

	int L = v[0];
	bool f = true;
	FOR(i,1,n) {
		if(abs(v[i] - (L + i)) <= 1) continue;
		f = false;
		break;
	}
	if(f) return YES, 0;

	L = v[0] + 1;
	f = true;
	FOR(i,1,n) {
		if(abs(v[i] - (L + i)) <= 1) continue;
		f = false;
		break;
	}
	if(f) return YES, 0;

	L = v[0] - 1;
	f = true;
	FOR(i,1,n) {
		if(abs(v[i] - (L + i)) <= 1) continue;
		f = false;
		break;
	}
	if(f) return YES, 0;
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