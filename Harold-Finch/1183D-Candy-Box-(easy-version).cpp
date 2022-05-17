
/*
 * Problem: 1183D Candy-Box-(easy-version)
 * Author: Harold-Finch
 * Date: Wednesday, June 26, 2019 8:00 PM
 * Status: Accepted, 202 ms, 13004800 bytes
 * Language: GNU C++14
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
#define print(result) printf("%d", result)
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


int main() {
	int q;
	scan(q);
	while(q--) {
		int n;
		scan(n);
		map<int, int> cnt;
		DFP(i,n){
			int a;
			scan(a);
			cnt[a]++;
		}
		multiset<pair<int,int>> cand;
		for(auto kv : cnt){
			for(int i = 1; i <= kv.S; i++){
				cand.ins(mp(-i, kv.F));
			}
		}
		// for(auto p : cand){
		// 	cout << p.F << " " << p.S << endl;
		// }
		ll res = 0;
		u_set<int> used, been;
		for(auto it = cand.begin(); it != cand.end(); it++){
			if(used.count((*it).S)) continue;
			if(been.count((*it).F)) continue;
			used.ins((*it).S);
			been.ins((*it).F);
			res += -(*it).F;
		}
		printf("%lld\n", res);
	}
	

	return 0; 
}