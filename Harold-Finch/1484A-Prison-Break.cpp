
/*
 * Problem: 1484A Prison-Break
 * Author: Harold-Finch
 * Date: Sunday, March 21, 2021 5:26 PM
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	int a,b;
	cin >> a >> b;
	cout << a*b << endl;
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