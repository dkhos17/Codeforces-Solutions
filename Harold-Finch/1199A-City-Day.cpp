
/*
 * Problem: 1199A City-Day
 * Author: Harold-Finch
 * Date: Tuesday, July 30, 2019 8:22 PM
 * Status: Accepted, 46 ms, 409600 bytes
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
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int n,x,y;
	cin >> n >> x >> y;
	vector<int> a(n);
	DFP(i,n){
		cin >> a[i];
	}
	int i = 0;
	for(; i < n; i++){
		bool f = true;
		for(int j = 0; j < x; j++){
			// cout << a[i] << " " << a[i-j-1] << endl;
			if(i-j-1 < 0) break;
			if(a[i-j-1] > a[i]) continue;
			f = false;
			break;
		}

		for(int j = 0 ; j < y; j++){
			// cout << a[i] << " " << a[i+j+1] << endl;
			if(i+j+1 >= n) break;
			if(a[i] < a[i+j+1]) continue;
			f = false;
			break;
		}
		// cout << endl;
		if(f) return cout << i+1 << endl, 0;
	}
	cout << i << endl;
	return 0; 
}