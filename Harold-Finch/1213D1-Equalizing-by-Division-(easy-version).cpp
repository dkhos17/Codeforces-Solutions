
/*
 * Problem: 1213D1 Equalizing-by-Division-(easy-version)
 * Author: Harold-Finch
 * Date: Friday, August 30, 2019 8:17 PM
 * Status: Accepted, 312 ms, 204800 bytes
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

map<pair<int,int>, int> cnt;

int main() {
	int n,k;
	scanP(n,k);
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		scan(a[i]);
	}

	for(auto x : a){
		if(cnt.count(mp(x,x))) continue;
		int c = 0, t = x;
		cnt[mp(x,x)] = c;
		while(t){
			t /= 2;
			c++;
			cnt[mp(x, t)] = c;
		}
	}
	int res = 2*MAXN;
	for(int i = 0; i < 2*MAXN; i++){
		multiset<int> all;
		for(int j = 0; j < n; j++){
			auto p = mp(a[j],i);
			if(!cnt.count(p)) continue;
			all.ins(cnt[p]);
		}
		if(all.size() < k) continue;
		else {
			int kk = k, r = 0;
			for(auto x : all){
				if(!kk) break;
				r += x;
				kk--;
			}
			res = min(res, r);
		}
	}
	cout << res << endl;
	return 0; 
}