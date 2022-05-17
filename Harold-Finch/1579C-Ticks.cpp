
/*
 * Problem: 1579C Ticks
 * Author: Harold-Finch
 * Date: Tuesday, September 28, 2021 7:23 PM
 * Status: Accepted, 31 ms, 3686400 bytes
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
	int n,m,k;
	cin >> n >> m >> k;

	int gr[n+1][m+1];
	int bn[n+1][m+1];
	set_val(bn, 0);
	FOR(i,0,n) {
		FOR(j,0,m) {
			char ch;
			cin >> ch;
			if(ch == '*') gr[i][j] = 1;
			else gr[i][j] = 0;
		}
	}

	FOR(i,k,n) {
		FOR(j,1,m-1) {
			if(gr[i][j]) {
				int h = 1;
				while(i-h >= 0 == j-h >= 0 == j+h < m == gr[i-h][j-h] == gr[i-h][j+h]){
					h++;
				}
				if(h > k) {
					h = 1;
					bn[i][j] = 1;
					while(i-h >= 0 == j-h >= 0 == j+h < m == gr[i-h][j-h] == gr[i-h][j+h]){
						bn[i-h][j+h] = 1;
						bn[i-h][j-h] = 1;
						h++;
					}
				}
			}
		}
	}

	FOR(i,0,n) {
		FOR(j,0,m) {
			if(gr[i][j] == !bn[i][j]) return NO, 0;
		}
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