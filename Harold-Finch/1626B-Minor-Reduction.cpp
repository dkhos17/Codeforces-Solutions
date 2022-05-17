
/*
 * Problem: 1626B Minor-Reduction
 * Author: Harold-Finch
 * Date: Sunday, January 16, 2022 6:53 PM
 * Status: Accepted, 46 ms, 512000 bytes
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
	string x;
	cin >> x;

	int idx = -1;
	FOR(i,1,x.size()) {
		int d0 = x[i-1] - '0';
		int d1 = x[i] - '0';
		int d01 = 10*d0 + d1;

		int sum = d0+d1;
		if(sum >= 10) {
			idx = i;
		}
	}

	if(idx != -1) {
		int d0 = x[idx-1] - '0';
		int d1 = x[idx] - '0';
		int sum = d0 + d1;

		x[idx-1] = '0' + sum / 10;
		x[idx] = '0' + sum % 10;
		return cout << x << endl, 0;
	}

	int d0 = x[0] - '0';
	int d1 = x[1] - '0';

	cout << d0+d1 << x.substr(2) << endl;

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