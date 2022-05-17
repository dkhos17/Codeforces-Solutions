
/*
 * Problem: 1238B Kill-`Em-All
 * Author: Harold-Finch
 * Date: Tuesday, October 8, 2019 7:21 PM
 * Status: Accepted, 780 ms, 3174400 bytes
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

int main() {
	int q;
	scan(q);
	while(q--){
		int n,r;
		scanP(n,r);
		vector<int> x;
		u_set<int> been;
		FOR(i,n){
			int t;
			scan(t);
			if(!been.count(t)) x.pb(t);
			been.ins(t);
		}
		int res = 0;
		sort(BE(x));
		while(!x.empty()){
			int e = x[x.size()-1];
			x.pop_back();
			res++;			
			auto it = upper_bound(x.begin(),x.end(),res*r);
			vector<int> s(it, x.end());
			x = s;
		}
		cout << res << endl;
	}
	
	return 0; 
}