
/*
 * Problem: 1626D Martial-Arts-Tournament
 * Author: Harold-Finch
 * Date: Monday, January 17, 2022 3:01 AM
 * Status: Accepted, 155 ms, 12697600 bytes
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

vector<int> pows2;

int solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	map<int,int> cnt;
	for(auto x : a) cnt[x]++;

	vector<pair<int,int>> itr;
	for(auto kv : cnt) {
		itr.pb(kv);
	}

	vector<int> posX,posZ;

	posX.pb(0);
	posX.pb(itr[0].S);
	FOR(i,1,itr.size()) {
		posX.pb(posX.back() + itr[i].S);
	}

	posZ.pb(0);
	posZ.pb(itr.back().S);
	FOL(i,itr.size()-2,0) {
		posZ.pb(posZ.back() + itr[i].S);
	}

	int ans = 2*MAXN;
	for(auto x : pows2) {
		int resX = 0;
		auto it = lower_bound(posX.B(), posX.E(), x);
		if(it != posX.E()) {
			if(*it != x) {
				it--;
				resX += x - (*it); 
			}
		} else {
			it--;
			resX += x - (*it);
		}
		
			for(auto z : pows2) {
				int resZ = 0;
				auto it = lower_bound(posZ.B(), posZ.E(), z);
				if(it != posZ.E()) {
					if(*it != z) {
						it--;
						resZ += z - (*it); 
					}
				} else {
					it--;
					resZ += z - (*it);
				}

					int tot = x - resX + z - resZ;
					for(auto y : pows2) {
						if(n - tot <= y) {
							int resY = y - (n - tot);
							ans = min(ans, resX + resZ + resY);
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

	int x = 1;
	while(x <= 5*MAXN) {
		pows2.pb(x);
		x *= 2;
	}

	while(t--)
		solve();
	
	return 0; 
}