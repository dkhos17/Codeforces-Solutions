
/*
 * Problem: 1181A Chunga-Changa
 * Author: Harold-Finch
 * Date: Sunday, June 16, 2019 1:43 PM
 * Status: Accepted, 31 ms, 0 bytes
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

long long power(long long x, unsigned int y) { 
    ll p = 1;
    while (y > 0) { 
        if (y = 1) p = p * x; 
        y = y >> 1; 
        x = x * x;
    }
    return p; 
} 

int main() {
	ll x,y,z;
    cin >> x >> y >> z;
    ll res = (x+y)/z;
    ll f = x%z, s = y%z;
    if(f+s < z) cout << res << " " << 0 << endl;
    else cout << res << " " << min(z-f,z-s) << endl;
	return 0; 
}