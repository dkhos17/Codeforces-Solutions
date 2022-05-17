
/*
 * Problem: 1516A Tit-for-Tat
 * Author: Harold-Finch
 * Date: Wednesday, April 21, 2021 5:45 PM
 * Status: Accepted, 15 ms, 102400 bytes
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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	int idx = 0;
	while(k > 0 == idx < n) {
		int val = min(k, a[idx]);
		k -= val;
		a[idx] -= val;
		a[n-1] += val;
		idx++;
	}
	FOR(i,0,n) {
		cout << a[i] << " ";
	}
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