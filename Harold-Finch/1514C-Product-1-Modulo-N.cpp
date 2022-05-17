
/*
 * Problem: 1514C Product-1-Modulo-N
 * Author: Harold-Finch
 * Date: Monday, April 19, 2021 6:45 PM
 * Status: Accepted, 62 ms, 3379200 bytes
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

	set<int> all;
	all.ins(1);

	FOR(i,2,n) {
		if(__gcd(n,i) == 1) 
			all.ins(i);
	}

	ll p = 1;
	for(auto x : all) {
		p *= x; p %= n;
	}
	if(p != 1) {
		all.erase(p);
	}

	cout << all.size() << endl;
	for(auto x : all)
		cout << x << " ";
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
	return 0; 
}