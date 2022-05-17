
/*
 * Problem: 1215A Yellow-Cards
 * Author: Harold-Finch
 * Date: Sunday, September 15, 2019 2:54 PM
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
	ios::sync_with_stdio(0);  cin.tie(0);
	int a1,a2,k1,k2,n;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	int res = 0;
	for(int i = 0; i <= a1; i++){
		if(i*k1 > n) break;
		res = max(res,i + min((n-i*k1)/k2,a2));
	}

	cout << max(0,n-a1*(k1-1)-a2*(k2-1)) << " " << res << endl;
	return 0; 
}