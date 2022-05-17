
/*
 * Problem: 1656A Good-Pairs
 * Author: Harold-Finch
 * Date: Thursday, March 24, 2022 6:45 PM
 * Status: Accepted, 62 ms, 819200 bytes
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

	vector<int> b = a;
	sort(a.B(), a.E());

	int x = 1;
	FOR(i,0,n) {
		if(b[i] == a[0]) {
			x = i+1;
			break;
		}
	}

	int y = 1;
	FOL(j,n-1,0) {
		if(b[j] == a.back()) {
			y = j+1;
			break;
		}
	}
	cout << x << " " << y << endl;

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