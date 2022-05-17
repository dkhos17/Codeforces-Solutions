
/*
 * Problem: 1230A Dawid-and-Bags-of-Candies
 * Author: Harold-Finch
 * Date: Monday, September 23, 2019 6:19 PM
 * Status: Accepted, 46 ms, 0 bytes
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
	vector<int> a(4);
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(BE(a));
	if(a[0] + a[1] + a[2] == a[3]) return cout << "YES" << endl, 0;
	if(a[0] + a[3] == a[1] + a[2]) return cout << "YES" << endl, 0;
	if(a[0] + a[2] == a[1] + a[3]) return cout << "YES" << endl, 0;
	cout << "NO" << endl;
	return 0; 
}