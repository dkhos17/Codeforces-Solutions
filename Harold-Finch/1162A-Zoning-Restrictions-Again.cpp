
/*
 * Problem: 1162A Zoning-Restrictions-Again
 * Author: Harold-Finch
 * Date: Saturday, May 4, 2019 9:22 PM
 * Status: Accepted, 31 ms, 0 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define Pq priority_queue
#define u_set unordered_set
#define MOD_ 1000000007
#define MAXN 100001
#define swap(a,b) a = a^b;b = a^b;a = a^b;
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define scanT(t) for(scanf("%d",=t); t; t--)
#define print(result) printf("%d\n", result)
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define SZ(v) v.begin(), v.end()
#define RSZ(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


int main() {
    int n;
    scan(n);
    int h,m;
    scanP(h,m);
    int arr[n];
    DFP(i,n){
        arr[i] = h;
    }
    DFP(i,m){
        int l,r,x;
        scanP(l,r);
        l--; r--;
        scan(x);
        for(int j = l; j <= r; j++){
            arr[j] = min(arr[j], x);
        }
    }    
    ll res = 0LL;
    for(int i = 0; i < n; i++){
        res += arr[i]*arr[i];
    }

    cout << res << endl;
    return 0;
}
