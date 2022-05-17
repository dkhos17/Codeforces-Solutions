
/*
 * Problem: 1579B Shifting-Sort
 * Author: Harold-Finch
 * Date: Tuesday, September 28, 2021 7:02 PM
 * Status: Accepted, 186 ms, 3891200 bytes
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
	vector<int> v(n), s;
	for(auto= x : v) cin >> x;

	s = v;
	sort(s.B(), s.E());

	vector<vector<int>> res;
	FOR(i,0,n) {
		if(v[i] == s[i]) continue;
		vector<int> seg;
		FOR(j,i,n) {
			seg.pb(v[j]);
			if(v[j] == s[i]) {
				vector<int> op(3);
				op[0] = i+1;
				op[1] = j+1;
				op[2] = j-i;
				res.pb(op);

				int idx = 0;
				FOR(k,i,j+1) {
					v[k] = seg[(idx+op[2])%seg.size()];
					idx++;
				}
				break;
			}
		}
	}

	cout << res.size() << endl;
	for(auto x : res) {
		for(auto y : x) {
			cout << y << " ";
		}
		cout << endl;
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