
/*
 * Problem: 1511B GCD-Length
 * Author: Harold-Finch
 * Date: Monday, April 12, 2021 6:47 PM
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

int solve() {
	ll a,b,c;
	cin >> a >> b >> c;
	
	ll gcd = pow(10,c-1);

	ll x = gcd, y = gcd;
	while(to_string(x).size() < a) {
		x*= 2;
	}

	while(to_string(y).size() < b) {
		y*= 3;
	}

	if(to_string(x).size() > a || to_string(y).size() > b) {
		x = gcd; y = gcd;
		while(to_string(x).size() < a) {
			x*= 3;
		}

		while(to_string(y).size() < b) {
			y*= 2;
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