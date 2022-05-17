
/*
 * Problem: 1674A Number-Transformation
 * Author: Harold-Finch
 * Date: Monday, May 2, 2022 6:42 PM
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
#define SHOW(v) for(auto x : v) cout << x << " "; cout << endl;
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	int x,y;
	cin >> x >> y;

	if(y % x != 0) return cout << 0 << " " << 0 << endl, 0;

	y /= x;

	if(y == 1) return cout << 1 << " " << 1 << endl, 0;

	FOR(b,2,101) {
		if(y % b == 0) {
			int a = 0;
			x = 1;
			while(x < y) {
				x *= b;
				a++;
			}
			if(x == y) return cout << a << " " << b << endl, 0;
		}
	}

	return cout << 0 << " " << 0 << endl, 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}