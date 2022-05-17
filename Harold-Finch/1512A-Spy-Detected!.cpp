
/*
 * Problem: 1512A Spy-Detected!
 * Author: Harold-Finch
 * Date: Saturday, April 10, 2021 6:38 PM
 * Status: Accepted, 15 ms, 0 bytes
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
	vector<int> v(n);
	for(auto= x : v) cin >> x;

	FOR(i,0,n) {
		int prev = (i-1+n) % n;
		int next = (i+1) % n;
		if(v[i] != v[prev] == v[i] != v[next]) {
			return cout << i+1 << endl, 0;
		}
	}
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