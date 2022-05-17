
/*
 * Problem: 1675C Detective-Task
 * Author: Harold-Finch
 * Date: Thursday, May 5, 2022 8:24 PM
 * Status: Accepted, 701 ms, 2969600 bytes
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
	string s;
	cin >> s;

	int n = s.size();
	int cnt[2*MAXN][3];
	set_val(cnt, 0);

	FOR(i,0,n) {
		if(i) {
			cnt[i][0] += cnt[i-1][0];
			cnt[i][1] += cnt[i-1][1];
			cnt[i][2] += cnt[i-1][2];
		}

		if(s[i] == '0') {
			cnt[i][0]++;
		} else if(s[i] == '1') {
			cnt[i][1]++;
		} else {
			cnt[i][2]++;
		}
	}

	int ans = 0;
	bool f = true;
	FOR(i,0,n) {
		if(s[i] == '0') {
			if(f) {
				if(cnt[n-1][1] - cnt[i][1] > 0) {
					return cout << 1 << endl, 0;
				} else {
					if(cnt[i][1] || cnt[i][2]) ans++;
					else return cout << 1 << endl, 0;
				}
			}

			f = false;
		} else if(s[i] == '1') {
			if(f) {
				if(cnt[n-1][1] - cnt[i][1] == 0) {
					ans++;
				}
			}
		} else {
			if(f) {
				if(cnt[n-1][1] - cnt[i][1] == 0) {
					ans++;
				}
			}
		}

	}
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