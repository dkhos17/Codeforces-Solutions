
/*
 * Problem: 1185A Ropewalkers
 * Author: Harold-Finch
 * Date: Wednesday, June 19, 2019 6:51 PM
 * Status: Accepted, 46 ms, 0 bytes
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
	vector<ll> p(3);
	ll d;
	scanPL(p[0],p[1]);
	scanPL(p[2],d);
	sort(BE(p));
	ll res = 0;
	if(p[1]-p[0] < d) res += d-(p[1]-p[0]);
	if(p[2]-p[1] < d) res += d-(p[2]-p[1]);
	cout << res << endl;
	return 0; 
}