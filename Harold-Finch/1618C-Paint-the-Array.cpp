
/*
 * Problem: 1618C Paint-the-Array
 * Author: Harold-Finch
 * Date: Tuesday, December 14, 2021 7:11 PM
 * Status: Accepted, 61 ms, 102400 bytes
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
	vector<ll> a(n);
	for(auto= x : a) cin >> x;

	ll gcd1 = a[0], gcd2 = a[1];

	for(int i = 2; i < n; i+=2) {
		gcd1 = __gcd(gcd1, a[i]);
	}

	for(int i = 3; i < n; i+=2) {
		gcd2 = __gcd(gcd2, a[i]);
	}

	bool f1 = true, f2 = true;

	for(int i = 1; i < n; i+=2) {
		if(a[i] % gcd1 == 0) {
			f1 = false;
			break;
		}
	}

	if(f1) {
		return cout << gcd1 << endl, 0;
	}

	for(int i = 0; i < n; i+=2) {
		if(a[i] % gcd2 == 0) {
			f2 = false;
			break;
		}
	}

	if(f2) {
		return cout << gcd2 << endl, 0;
	}

	cout << 0 << endl;

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