
/*
 * Problem: 1592B Hemose-Shopping
 * Author: Harold-Finch
 * Date: Sunday, October 3, 2021 6:57 PM
 * Status: Accepted, 77 ms, 4505600 bytes
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
	int n,x;
	cin >> n >> x;
	vector<int> v(n), a;
	for(auto= x : v) cin >> x;

	a = v;
	sort(a.B(), a.E());

	FOR(i,n-x,x) {
		if(a[i] != v[i]) return NO, 0;
	}
	YES;
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