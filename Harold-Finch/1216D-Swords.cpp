
/*
 * Problem: 1216D Swords
 * Author: Harold-Finch
 * Date: Saturday, September 21, 2019 11:52 AM
 * Status: Accepted, 155 ms, 8192000 bytes
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
	int n;
	scan(n);
	vector<ll> a(n);
	DFP(i,n){
		scanf("%lld", =a[i]);
	}
	sort(RBE(a));
	ll mx = a[0];
	set<ll> df;
	ll sum = 0;
	for(int i = 1; i < n; i++){
		df.ins(mx - a[i]);
		sum += (mx - a[i]);
	}
	ll z = *df.begin();
	for(auto x : df){
		z = __gcd(z,x);
	}
	ll y = sum/z;
	cout << y << " " << z << endl;
	return 0; 
}