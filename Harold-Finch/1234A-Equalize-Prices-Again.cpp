
/*
 * Problem: 1234A Equalize-Prices-Again
 * Author: Harold-Finch
 * Date: Tuesday, October 1, 2019 6:40 PM
 * Status: Accepted, 30 ms, 0 bytes
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
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		vector<ll> a(n);
		ll sum = 0;
		FOR(i,n){
			cin >> a[i];
			sum += a[i];
		}
		ll r = sum/n;
		while(n*r < sum) r++;
		cout << r << endl; 
	}
	return 0; 
}