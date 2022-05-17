
/*
 * Problem: 1213A Chips-Moving
 * Author: Harold-Finch
 * Date: Friday, August 30, 2019 6:38 PM
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
	int n;
	cin >> n;
	int c1 = 0, c2 = 0;
	while(n--){
		int x;
		cin >> x;
		if(x % 2 == 0) c1++;
		else c2++;
	}
	cout << min(c1,c2) << endl;
	return 0; 
}