
/*
 * Problem: 1506A Strange-Table
 * Author: Harold-Finch
 * Date: Thursday, March 25, 2021 6:45 PM
 * Status: Accepted, 61 ms, 0 bytes
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	ll n,m,x;
	cin >> n >> m >> x;

	ll i = x % n;
	if(!i) i += n;
	ll j = (x + n - 1) / n;

	cout << (i-1) * m + j << endl; 

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}