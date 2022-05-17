
/*
 * Problem: 1512D Corrupted-Array
 * Author: Harold-Finch
 * Date: Saturday, April 10, 2021 7:31 PM
 * Status: Accepted, 108 ms, 1638400 bytes
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
	vector<ll> b(n+2);
	for(auto= x : b) cin >> x;

	sort(b.B(), b.E());
	ll sum = 0;
	FOR(i,0,n+2) {
		sum += b[i];
	}

	if(b[n] == sum - b[n] - b[n+1]) {
		FOR(i,0,n) {
			cout << b[i] << " ";
		}
		cout << endl;
		return 0;
	}

	FOR(i,0,n+1) {
		if(b[n+1] == sum - b[n+1] - b[i]) {
			FOR(j,0,n+1) {
				if(j == i) continue;
				cout << b[j] << " ";
			}
			cout << endl;
			return 0;
		}
	}
	cout << -1 << endl;
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