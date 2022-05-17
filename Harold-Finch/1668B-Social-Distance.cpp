
/*
 * Problem: 1668B Social-Distance
 * Author: Harold-Finch
 * Date: Tuesday, April 19, 2022 6:50 PM
 * Status: Accepted, 187 ms, 409600 bytes
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
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	sort(a.B(), a.E());

	ll chr = 2*a[n-1] + 1;
	FOL(i,n-2,1) {
		chr += a[i]+1;
	}
	chr++;
	if(chr <= m) YES;
	else NO;
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