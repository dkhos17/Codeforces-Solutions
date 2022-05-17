
/*
 * Problem: 1174A Ehab-Fails-to-Be-Thanos
 * Author: Harold-Finch
 * Date: Monday, June 3, 2019 6:27 PM
 * Status: Accepted, 46 ms, 0 bytes
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
    int n;
    scan(n);
    vector<int> v(2*n);
    DFP(i,2*n){
        scan(v[i]);
    }
    sort(BE(v));
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1 += v[i];
    }
    for(int i = n; i < 2*n; i++){
        sum2 += v[i];
    }
    if(sum1 != sum2) {
        for(auto x : v) cout << x << " ";
    }else cout << -1 << endl;
    return 0;
}




