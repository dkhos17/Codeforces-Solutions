
/*
 * Problem: 1658C Shinju-and-the-Lost-Permutation
 * Author: Harold-Finch
 * Date: Sunday, March 27, 2022 7:48 PM
 * Status: Accepted, 31 ms, 409600 bytes
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
	vector<int> c(n);
	for(auto= x : c) cin >> x;

	vector<int> ones;
	FOR(i,0,n) if(c[i] == 1) ones.pb(i);

	if(ones.size() > 1) return NO, 0;

	FOR(i,0,n) {
		if(c[i] - c[(i-1+n) % n] > 1) return NO, 0;
	}

    int idx = n - (ones.size() ? ones[0] : -1);
    FOR(i,0,n) {
        if(c[i] > ((i + idx) % n) + 1) return NO, 0;
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