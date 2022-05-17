
/*
 * Problem: 1228B Filling-the-Grid
 * Author: Harold-Finch
 * Date: Sunday, September 29, 2019 5:50 PM
 * Status: Accepted, 31 ms, 3993600 bytes
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

int h,w;
int G[1001][1001];

long long power(long long x, unsigned int y) { 
    ll p = 1;
    while (y > 0) { 
        if (y = 1) p = p * x % MOD; 
        y = y >> 1;
        x = x * x % MOD;
    }
    return p % MOD; 
} 

int main() {
	scanP(h,w);
	vector<int> r(h),c(w);
	FOR(i,h){
		scan(r[i]);
	}
	FOR(j,w){
		scan(c[j]);
	}

	int idx = 0;
	for(auto x : r){
		FOR(i,x){
			G[idx][i] = 1;
		}
		G[idx][x] = -1;
		idx++;
	}

	idx = 0;
	for(auto x : c){
		FOR(i,x){
			if(G[i][idx] == -1) return cout << 0 << endl, 0;
			G[i][idx] = 2;
		}
		if(G[x][idx] == 1) return cout << 0 << endl, 0;
		G[x][idx] = -2;
		idx++;
	}

	ll res = 0;
	FOR(i,h){
		FOR(j,w){
			if(!G[i][j]) res++;
		}
	}
	cout << power(2,res) << endl;
	return 0; 
}