
/*
 * Problem: 1174B Ehab-Is-an-Odd-Person
 * Author: Harold-Finch
 * Date: Monday, June 3, 2019 6:37 PM
 * Status: Accepted, 77 ms, 409600 bytes
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
    vector<int> v(n);
    int odd = 0;
    DFP(i,n){
        scan(v[i]);
        if(v[i] % 2 == 1) odd++;
    }
    if(odd != 0 == odd != n) sort(BE(v));
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}




