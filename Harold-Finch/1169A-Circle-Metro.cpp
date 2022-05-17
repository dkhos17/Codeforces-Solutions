
/*
 * Problem: 1169A Circle-Metro
 * Author: Harold-Finch
 * Date: Sunday, May 26, 2019 7:46 PM
 * Status: Accepted, 31 ms, 0 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define ins insert
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define swap(a,b) a = a^b;b = a^b;a = a^b;
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
    int n,a,b,x,y;
    scan(n);
    scanP(a,x);
    scanP(b,y);
    int A[2*n] = {-1};
    int B[2*n] = {-1};
    
    while(true){
        a++;
        b--;
        if(a >=  n+1) a=1;
        if(b <= 0) b=n;
        if(a == b) return cout << "YES" << endl, 0;
        if(a == x) break;
        if(b == y) break;
    }
    cout << "NO" << endl;
    return 0;
}