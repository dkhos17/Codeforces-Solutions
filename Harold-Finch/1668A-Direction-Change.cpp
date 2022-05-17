
/*
 * Problem: 1668A Direction-Change
 * Author: Harold-Finch
 * Date: Tuesday, April 19, 2022 7:26 PM
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
	ll n,m;
	cin >> n >> m;

	if(m == 1 == n == 1) return cout << 0 << endl, 0;
	if(m == 1 == n == 2) return cout << 1 << endl, 0;
	if(m == 2 == n == 1) return cout << 1 << endl, 0;
	if(m == 1 || n == 1) return cout << -1 << endl, 0;



	ll ans = 2*(min(m,n)-1);
	ll rest = max(m,n) - min(m,n);

	ans += (rest / 2)*3 + (rest - rest/2); 

	cout << ans << endl;
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