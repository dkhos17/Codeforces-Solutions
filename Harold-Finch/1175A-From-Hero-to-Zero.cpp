
/*
 * Problem: 1175A From-Hero-to-Zero
 * Author: Harold-Finch
 * Date: Wednesday, June 5, 2019 6:44 PM
 * Status: Accepted, 15 ms, 0 bytes
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
    int t;
	scan(t);
	while(t--){
		ll n,k, res = 0;
		scanPL(n,k);
		while(n != 0){
			if(n % k == 0){
				n = n/k;
				res++;
			} else{
				res += (n%k);
					n -= (n%k);
			}
		}
		cout << res << endl;
	}
	return 0; 
}