
/*
 * Problem: 1166E The-LCMs-Must-be-Large
 * Author: Harold-Finch
 * Date: Friday, May 17, 2019 8:53 PM
 * Status: Accepted, 124 ms, 8396800 bytes
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

map<int, u_set<int>> cls;

int main() {
    int m,n;
    scanP(m,n);
    DFP(i,m){
        int k;
        scan(k);
        DFP(j,k){
            int idx;
            scan(idx);
            cls[i].insert(idx); 
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(j == i) continue;
            bool f = false;
            for(int idx : cls[j]){
                if(!cls[i].count(idx)) continue;
                f = true;
                break;
            }
            if(!f) return cout << "impossible" << endl, 0;
        }
    }
    cout << "possible" << endl;
	return 0; 
}
