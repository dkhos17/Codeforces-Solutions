
/*
 * Problem: 1183C Computer-Game
 * Author: Harold-Finch
 * Date: Wednesday, June 26, 2019 7:44 PM
 * Status: Accepted, 140 ms, 0 bytes
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
#define print(result) printf("%d\n", result)
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


ll k,n,a,b;
bool f = false;


bool isEnough(ll= r){
	ll tot = k;
	tot -= r*a;
	if(tot <= min(a,b)) return false;
	tot -= (n-r)*b;
	if(tot <= 0) return false;
    return true;
}

ll BSearchSolution(ll end){
    ll startBS = 0, endBS = end, res = 0;
    while (startBS <= endBS) {
        ll bstep = (startBS + endBS)/2;
       	ll tot = k - bstep*a;
        if(tot > (n - bstep) * b){
            res = bstep;
            startBS = bstep + 1;
        }else{
            endBS = bstep - 1;
        }
    }
    return res;
}

int main() {
	int q;
	scan(q);
	while(q--){
		scanPL(k,n); scanPL(a,b);
		if(n * b >= k){
            print(-1);
            continue;
        }
		printf("%lld\n", BSearchSolution(n));
	}
	
	return 0; 
}