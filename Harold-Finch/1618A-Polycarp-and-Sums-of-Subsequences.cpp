
/*
 * Problem: 1618A Polycarp-and-Sums-of-Subsequences
 * Author: Harold-Finch
 * Date: Tuesday, December 14, 2021 6:39 PM
 * Status: Accepted, 46 ms, 0 bytes
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
	int n = 7;
	// cin >> n;
	vector<int> b(n);
	for(auto= x : b) cin >> x;

	int a123 = b[6];
	int a23 = b[5];
	int a13 = b[4];

	int a1 = a123 - a23;
	int a2 = a123 - a13; 
	int a3 = a123 - a1 - a2;

	cout << a1 << " " << a2 << " " << a3 << endl;

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