
/*
 * Problem: 1169B Pairs
 * Author: Harold-Finch
 * Date: Sunday, May 26, 2019 8:03 PM
 * Status: Accepted, 467 ms, 18841600 bytes
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
    int n,m;
    scanP(n,m);
    set<pair<int,int>> all, rest;
    DFP(i,m){
        int a,b;
        scanP(a,b);
        all.ins(mp(a,b));
    }
    int x = (*all.begin()).F;
    for(auto p : all){
        if(p.F == x || p.S == x)continue;
        rest.ins(p);
    }
    int y = (*rest.begin()).F;
    for(auto p : rest){
        if(p.F == y || p.S == y) continue;
        y = -1;
        break;
    }
    if(y != -1) return cout << "YES" << endl, 0;
    y = (*rest.begin()).S;
    for(auto p : rest){
        if(p.F == y || p.S == y) continue;
        y = -1;
        break;
    }
    if(y != -1) return cout << "YES" << endl, 0;

    rest.clear();
    x = (*all.begin()).S;
    for(auto p : all){
        if(p.F == x || p.S == x)continue;
        rest.ins(p);
    }
    y = (*rest.begin()).F;
    for(auto p : rest){
        if(p.F == y || p.S == y) continue;
        y = -1;
        break;
    }
    if(y != -1) return cout << "YES" << endl, 0;
    y = (*rest.begin()).S;
    for(auto p : rest){
        if(p.F == y || p.S == y) continue;
        y = -1;
        break;
    }
    if(y != -1) return cout << "YES" << endl, 0;

    cout << "NO" << endl;
    return 0;
}