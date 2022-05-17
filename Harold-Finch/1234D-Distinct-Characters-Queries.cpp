
/*
 * Problem: 1234D Distinct-Characters-Queries
 * Author: Harold-Finch
 * Date: Tuesday, October 1, 2019 8:46 PM
 * Status: Accepted, 716 ms, 3584000 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define ins insert
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define FOR(i,n) for (int i=0; i<n; i++)
#define DBG(x,y) cout << x << " " << y << endl;
#define F first
#define S second

set<int> dp[26];

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	FOR(i,s.size()){
		dp[s[i]-'a'].ins(i);
	}
	int q;
	cin >> q;
	while(q--){
		int t;
		cin >> t;
		if(t == 1){
			int p;
			char c;
			cin >> p >> c;
			dp[s[p-1]-'a'].erase(p-1);
			s[p-1] = c; 
			dp[c-'a'].ins(p-1);
		}else {
			int l,r;
			cin >> l >> r;
			ll res = 0;
			FOR(i,26){
				auto it1 = dp[i].lower_bound(l-1);
				if(it1 != dp[i].end() == (*it1) < r) res++;
			}
			cout << res << endl;
		}
	}
	return 0; 
}