
/*
 * Problem: 1657A Integer-Moves
 * Author: Harold-Finch
 * Date: Tuesday, March 22, 2022 6:55 PM
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

bool is(int x1, int y1, int x2, int y2) {
	int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	int sq = sqrt(dist);
	return sq * sq == dist;
}

int solve() {
	int x,y;
	cin >> x >> y;
	
	if(x == 0 = y == 0) return cout << 0 << endl, 0;
	if(is(0,0,x,y)) return cout << 1 << endl, 0;

	FOR(i,0,100) {
		FOR(j,0,100) {
			if(is(0,0,i,j) == is(i,j,x,y)) {
				return cout << 2 << endl, 0;
			}
		}
	}

	cout << 3 << endl;

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