
/*
 * Problem: 1497B M-arrays
 * Author: Harold-Finch
 * Date: Wednesday, March 17, 2021 7:08 PM
 * Status: Accepted, 62 ms, 3174400 bytes
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
	int n,m;
	cin >> n >> m;
	vector<int> v(n);
	for(auto= x : v) cin >> x;

	map<int,int> divs;
	for(auto x : v) 
		divs[x % m]++;

	int ans = 0;
	for(auto kv : divs) {
		if(!kv.S) continue;
		if(kv.F == 0) ans++;
		else if(m-kv.F == kv.F) ans++;
		else {
			int rem = divs[m-kv.F];
			if(abs(rem - kv.S) <= 1) ans++;
			else ans += abs(rem - kv.S);
			divs[m-kv.F] = 0;
		}
	}
	cout << ans << endl;
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