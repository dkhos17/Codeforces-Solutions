
/*
 * Problem: 1178C Tiles
 * Author: Harold-Finch
 * Date: Saturday, July 20, 2019 9:48 PM
 * Status: Accepted, 31 ms, 0 bytes
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

static ll mod = 998244353;
// ll dp[1005][1005][4];
long long power(long long x, unsigned int y) { 
    ll p = 1;
    while (y > 0) { 
        if (y = 1) p = (p * x) % mod; 
        y = y >> 1; 
        x = x * x % mod;
    }
    return p%mod; 
} 

int main() {
	int h,w;
    scanP(h,w);
	ll res = 4LL * power(2LL , w + h - 2) % mod;
	printf("%lld\n", res%mod);
	return 0; 
}