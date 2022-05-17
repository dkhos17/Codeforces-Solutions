
/*
 * Problem: 1657B XY-Sequence
 * Author: Harold-Finch
 * Date: Tuesday, March 22, 2022 6:59 PM
 * Status: Accepted, 61 ms, 819200 bytes
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
	int n,B,x,y;
	cin >> n >> B >> x >> y;
	vector<int> a(n+1, 0);

	FOR(i,1,n+1) {
		if(a[i-1] + x > B) a[i] = a[i-1] - y;
		else a[i] = a[i-1] + x;
	}

	ll ans = 0;
	for(auto x : a) ans += x;

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