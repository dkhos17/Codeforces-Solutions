
/*
 * Problem: 1672A Log-Chopping
 * Author: Harold-Finch
 * Date: Saturday, April 23, 2022 6:19 PM
 * Status: Accepted, 15 ms, 102400 bytes
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
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	int even = 0, odd = 0;
	for(auto x : a) {
		if(x > 1) {
			if(x % 2 == 0) even++;
			else odd++;
		}
	}

	if(even % 2 == 1) cout << "errorgorn" << endl;
	else cout << "maomao90" << endl;
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