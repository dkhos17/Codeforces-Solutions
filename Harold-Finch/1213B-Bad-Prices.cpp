
/*
 * Problem: 1213B Bad-Prices
 * Author: Harold-Finch
 * Date: Friday, August 30, 2019 6:46 PM
 * Status: Accepted, 108 ms, 5529600 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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


int main() {
    int t;
	scan(t);
	while(t--){
		int n;
		scan(n);
		vector<int> a(n);
		DFP(i,n){
			scan(a[i]);
		}
		int res = 0;
		ordered_set o_set;
		for(int i = n-1; i >= 0; i--){
			o_set.insert(a[i]);
			res += (o_set.order_of_key(a[i]) ? 1 : 0);
		}
		cout << res << endl;
 	}
	return 0; 
}