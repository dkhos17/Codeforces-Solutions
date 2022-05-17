
/*
 * Problem: 1627B Not-Sitting
 * Author: Harold-Finch
 * Date: Saturday, January 15, 2022 9:37 PM
 * Status: Accepted, 46 ms, 3788800 bytes
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
 
	int idx = n*m-1;
	int ans = n+m-2;
	int gr[n][m];
	set_val(gr, 0);
	
	FOR(i,0,(n+1)/2) {
		FOR(j,0,(m+1)/2) {
			if(i == 0) {
				if(j == 0) gr[i][j] = ans;
				else gr[i][j] = gr[i][j-1] - 1; 
			} else {
				if(j == 0) gr[i][j] = gr[i-1][j] - 1;
				else gr[i][j] = gr[i][j-1] - 1;
			}
		}
		FOL(j,m-1, (m+1)/2) {
			if(i == 0) {
				if(j == m-1) gr[i][j] = ans;
				else gr[i][j] = gr[i][j+1] - 1; 
			} else {
				if(j == m-1) gr[i][j] = gr[i-1][j] - 1;
				else gr[i][j] = gr[i][j+1] - 1;
			}
		}
	}
 
	multiset<int> res;
 
	FOR(i,0,n) {
		FOR(j,0,m) {
			if(gr[i][j]) res.ins(gr[i][j]);
			else res.ins(gr[n-1-i][j]);
			
// 			cout << gr[i][j];
		}
// 		cout << endl;
	}
 
	for(auto x : res)
		cout << x << " ";
	cout << endl;
 
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