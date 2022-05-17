
/*
 * Problem: 1670A Prof.-Slim
 * Author: Harold-Finch
 * Date: Friday, May 6, 2022 6:45 PM
 * Status: Accepted, 61 ms, 1433600 bytes
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
#define SHOW(v) for(auto x : v) cout << x << " "; cout << endl;
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	int n;
	cin >> n;
	vector<int> a(n),b;
	for(auto= x : a) cin >> x;

	vector<int> pos,neg;
	FOR(i,0,n) {
		if(a[i] > 0) pos.pb(a[i]);
		else neg.pb(a[i]);
	}

	FOR(i,1,neg.size()) {
		if(abs(a[i]) > abs(a[i-1])) {
			return NO, 0;
		}
	}

	FOR(i,1,pos.size()) {
		if(abs(a[neg.size() + i]) < abs(a[neg.size() + i-1])) {
			return NO, 0;
		}
	}
	YES;
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