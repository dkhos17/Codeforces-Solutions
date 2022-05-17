
/*
 * Problem: 1180B Nick-and-Array
 * Author: Harold-Finch
 * Date: Friday, June 21, 2019 9:54 PM
 * Status: Accepted, 78 ms, 1433600 bytes
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
    int n;
	scan(n);
	vector<int> a,b;
	int mn = INT_MAX;
	for(int i = 0; i < n; i++){
		int t;
		scan(t);
		if(t >= 0) t = -t-1;
		a.pb(t);
		b.pb(t);
		mn = min(mn,t);
	}
	if(n == 1) return cout << -a[0]-1 << endl, 0;
	if(a.size() % 2 == 0){
		for(auto p : a){
			cout << p << " ";
		}
	}else{
		sort(BE(b));
		int odd = b[0];
		for(auto p : a){
			if(p == odd) {
				cout << -odd-1 << " ";
				odd = INT_MAX;
			}else cout << p << " ";
		}
	}

	return 0; 
}