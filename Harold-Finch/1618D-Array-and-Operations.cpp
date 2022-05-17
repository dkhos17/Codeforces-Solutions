
/*
 * Problem: 1618D Array-and-Operations
 * Author: Harold-Finch
 * Date: Tuesday, December 14, 2021 7:32 PM
 * Status: Accepted, 31 ms, 102400 bytes
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
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	sort(a.B(), a.E());

	ll scr = 0;
	FOR(i,0,n-2*k) {
		scr += a[i];
	}

	for(int i = 0; i < k; i++) {
		scr += a[n-2*k+i] / a[n-k+i];
	}
	cout << scr << endl;
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