
/*
 * Problem: 1591B Array-Eversion
 * Author: Harold-Finch
 * Date: Sunday, December 12, 2021 8:02 PM
 * Status: Accepted, 78 ms, 819200 bytes
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
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	int k = 0, x = 0;
	FOL(i,n-1,0) {
		if(a[i] > x) {
			x = a[i];
			k++;
		}
	}

	cout << k-1 << endl;
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