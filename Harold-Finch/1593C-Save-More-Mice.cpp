
/*
 * Problem: 1593C Save-More-Mice
 * Author: Harold-Finch
 * Date: Wednesday, October 13, 2021 8:08 PM
 * Status: Accepted, 171 ms, 3174400 bytes
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


bool check(vector<pair<ll,ll>>= all, int n, int x) {
	int idx = all.size();
	int sum = 0, tot = 0;
	while(idx > 0 == sum < x) {
		idx--;
		sum += all[idx].S;
		tot += (n-all[idx].F);
	}

	if(sum < x) return false;

	int opt = all[idx].S - (sum - x);
	tot -= (sum - x)*(n-all[idx].F);

	if(tot > n) return false;

	int cat = 0;
	if(opt )

	for(int i = idx+1; i < all.size()-1; i++) {

	}

}

int solve() {
	int n,k;
	cin >> n >> k;
	vector<ll> v(k);
	for(auto= x : v) cin >> x;

	sort(v.begin(), v.end());
    ll ans = 0, sum = n-1;
    FOL(i,k-1,0) {
        sum -= (n-v[i]);
        if(sum >= 0) {
        	ans++;
			continue;
		}
		return cout << ans << endl, 0;
        
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