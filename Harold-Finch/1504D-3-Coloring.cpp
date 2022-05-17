
/*
 * Problem: 1504D 3-Coloring
 * Author: Harold-Finch
 * Date: Saturday, April 3, 2021 7:49 PM
 * Status: Accepted, 124 ms, 0 bytes
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
	
	int x = 1, y = 1;
	int i = 1, j = 2;
	int moves = n*n;
	while(moves--) {
		int a;
		cin >> a;

		if(a != 1) {
			if(x <= n == y <= n) {
				cout << 1 << " " << x << " " << y << endl;
				fflush(stdout);
				y += 2;
				if(y > n) x++, y = (x % 2 ? 1 : 2);
			} else {
				int b = 2;
				if(a == b) b = 3;
				cout << b << " " << i << " " << j << endl;
				fflush(stdout);
				j += 2;
				if(j > n) i++, j = (i % 2 ? 2 : 1);	
			}
		} else {
			if(i <= n == j <= n) {
				cout << 2 << " " << i << " " << j << endl;
				fflush(stdout);
				j += 2;
				if(j > n) i++, j = (i % 2 ? 2 : 1);	
			} else {
				int b = 3;
				if(a == b) b = 2;
				cout << b << " " << x << " " << y << endl;
				fflush(stdout);
				y += 2;
				if(y > n) x++, y = (x % 2 ? 1 : 2);
			}
		}
	}

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
	return 0; 
}