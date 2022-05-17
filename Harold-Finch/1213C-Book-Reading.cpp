
/*
 * Problem: 1213C Book-Reading
 * Author: Harold-Finch
 * Date: Friday, August 30, 2019 7:11 PM
 * Status: Accepted, 31 ms, 0 bytes
 * Language: GNU C++17
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


int main() {
    int q;
	scan(q);
	while(q--){
		ll n,m;
		scanPL(n,m);
		if(m == 1 == n == 1) {
			cout << 1 << endl;
			continue;
		}

		if(m > n) {
			cout << 0 << endl;
			continue;
		}

		vector<ll> dp(10);
		ll cr = 0, sum = 0, res = 0;
		for(int i = 0; i < 10; i++){
			dp[i] = (cr+m)%10;
			cr += m;
			sum += dp[i];
		}
		ll mteli = n/(m*10);
		res += sum*mteli;
		for(ll i = 0; i < (n%(m*10))/m; i++){
			res += dp[i];
		}
		cout << res << endl;
	}
	return 0; 
}