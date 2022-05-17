
/*
 * Problem: 1238A Prime-Subtraction
 * Author: Harold-Finch
 * Date: Tuesday, October 8, 2019 6:57 PM
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
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define FOR(i,n) for (int i=0; i<n; i++)
#define DBG(x,y) cout << x << " " << y << endl;
#define F first
#define S second


int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> x >> y;
		if(x-y == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0; 
}