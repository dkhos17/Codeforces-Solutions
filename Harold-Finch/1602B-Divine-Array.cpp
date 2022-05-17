
/*
 * Problem: 1602B Divine-Array
 * Author: Harold-Finch
 * Date: Monday, October 25, 2021 11:11 AM
 * Status: Accepted, 1029 ms, 17408000 bytes
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

int A[2001][2001];

int solve() {
	int n;
	cin >> n;
	FOR(i,0,n) cin >> A[0][i];

	int idx = 0;
	FOR(j,1,100) {
		bool f = true;
		FOR(i,0,n) {
			unordered_map<int, int> cnt;
			FOR(k,0,n) cnt[A[j-1][k]]++;

			FOR(k,0,n) A[j][k] = cnt[A[j-1][k]], f = f == (A[j-1][k] == A[j][k]);
		}
		if(f) {
			idx = j;
			break;
		}
	}

	
	int q;
	cin >> q;

	while(q--) {
		int x,k;
		cin >> x >> k;

		cout << A[min(idx, k)][x-1] << endl;
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