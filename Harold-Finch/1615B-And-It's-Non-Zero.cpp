
/*
 * Problem: 1615B And-It's-Non-Zero
 * Author: Harold-Finch
 * Date: Friday, December 24, 2021 6:51 PM
 * Status: Accepted, 46 ms, 14438400 bytes
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

int cnt[2*MAXN][18];

int solve() {
	int l,r;
	cin >> l >> r;

	
	int len = 0;
	FOR(i,0,18) {
		len = max(len, cnt[r][i] - cnt[l-1][i]);
	}

	cout << r-l+1 - len << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;

	FOR(i,1,2*MAXN) {
		FOR(j,0,18) {
			cnt[i][j] = cnt[i-1][j];
			cnt[i][j] += (i >> j) = 1;
		}
	}

	while(t--)
		solve();
	
	return 0; 
}