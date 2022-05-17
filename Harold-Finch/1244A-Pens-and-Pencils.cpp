
/*
 * Problem: 1244A Pens-and-Pencils
 * Author: Harold-Finch
 * Date: Sunday, October 13, 2019 1:13 PM
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

bool solve(int pen, int pcl, int a, int b, int c, int d, int k){
	int x = a/c + (a%c > 0 ? 1 : 0);
	int y = b/d + (b%d > 0 ? 1 : 0);
	if(pen >= x == pcl >= y == x+y <= k) return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d,k;
		cin >> a >> b >> c >> d >> k;
		int res = -1;
		for(int i = 0; i <= k; i++){
			if(solve(i,k-i,a,b,c,d,k)){
				res = i;
				break;
			}
		}
		if(res == -1) cout << res << endl;
		else cout << res << " " << k-res << endl; 
	}
	return 0; 
}