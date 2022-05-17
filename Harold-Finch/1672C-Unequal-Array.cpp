
/*
 * Problem: 1672C Unequal-Array
 * Author: Harold-Finch
 * Date: Saturday, April 23, 2022 7:59 PM
 * Status: Accepted, 77 ms, 819200 bytes
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

int get(vector<int>= a) {
	int eq = 0;
	FOR(i,1,a.size()) {
		if(a[i] == a[i-1]) eq++;
	}
	return eq;
}

int solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	
	int eq = get(a);
	if(eq <= 1) return cout << 0 << endl, 0;


	int R = -1;
	int last = 0;
	FOR(i,1,a.size()) {
		if(a[i] == a[i-1]) last = i;
	}

	int ans = 0;
	FOR(i,1,last-1) {
		if(a[i] == a[i-1]) {
			a[i] = a[i+1] = R--;
			ans++;
		}
	}
	if(get(a) > 1) ans++;

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