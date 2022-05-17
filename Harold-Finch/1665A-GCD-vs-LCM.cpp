
/*
 * Problem: 1665A GCD-vs-LCM
 * Author: Harold-Finch
 * Date: Friday, April 8, 2022 6:59 PM
 * Status: Accepted, 31 ms, 0 bytes
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


int x,y;
bool find(int n, int g) {
	if(n % g) return false;
	if(n/g > 1) {
		x = 1; y = n/g-1;
		return true;
	}
	return false;
}

int solve() {
	int n;
	cin >> n;

	for(int gcd = 1; gcd <= n; gcd++) {
		if(find(n - 2*gcd, gcd)) {
			cout << x << " " << y << " " << gcd << " " << gcd << endl;
			return 0;
		}
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