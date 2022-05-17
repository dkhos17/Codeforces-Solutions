
/*
 * Problem: 1665B Array-Cloning-Technique
 * Author: Harold-Finch
 * Date: Friday, April 8, 2022 7:11 PM
 * Status: Accepted, 77 ms, 3788800 bytes
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
	vector<int> v(n);
	for(auto= x : v) cin >> x;

	map<int,int> cnt;
	for(auto x : v) cnt[x]++;

	int max_f = 0, max_s = 0;
	for(auto kv : cnt) {
		if(kv.S > max_s) {
			max_f = kv.F;
			max_s = kv.S;
		}
	}

	int ans = 0, cur = max_s;

	while(cur < n) {
		ans += (1 + max_s);
		cur += max_s;
		max_s *= 2;
	}
	ans -= (cur - n);

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