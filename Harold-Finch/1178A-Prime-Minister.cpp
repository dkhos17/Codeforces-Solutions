
/*
 * Problem: 1178A Prime-Minister
 * Author: Harold-Finch
 * Date: Saturday, July 20, 2019 8:23 PM
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
	int n;
	scan(n);
	vector<int> a(n), r;
	int sum = 0;
	DFP(i,n){
		scan(a[i]);
		sum += a[i];
	}
	int res = a[0];
	r.pb(1);
	for(int i = 1; i < n; i++){
		if(a[0]/2 >= a[i]) {
			res += a[i]; 
			r.pb(i+1);
		}
	}
	if(res > sum/2){
		cout << r.size() << endl;
		for(auto x : r) cout << x << " ";
	}else{
		cout << 0 << endl;
	}

	return 0; 
}