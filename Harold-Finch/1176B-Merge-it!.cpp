
/*
 * Problem: 1176B Merge-it!
 * Author: Harold-Finch
 * Date: Sunday, June 9, 2019 6:50 PM
 * Status: Accepted, 46 ms, 102400 bytes
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
    int t;
	scan(t);
	while(t--){
		int n;
		scan(n);
		vector<int> a0,a1,a2;
		DFP(i,n){
			int e;
			scan(e);
			if(e % 3 == 0) a0.pb(e);
			else if(e % 3 == 1) a1.pb(e);
			else if(e % 3 == 2) a2.pb(e);
		}
		ll res = a0.size();
		res += min(a1.size(), a2.size());
		if(a1.size() > a2.size()){
			ll rest = a1.size()-a2.size();
			res += rest/3;
		}else {
			ll rest = a2.size()-a1.size();
			res += rest/3;
		}
		cout << res << endl;
	}
	return 0; 
}