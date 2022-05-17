
/*
 * Problem: 1166C A-Tale-of-Two-Lands
 * Author: Harold-Finch
 * Date: Friday, May 17, 2019 8:25 PM
 * Status: Accepted, 108 ms, 1638400 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define swap(a,b) a = a^b;b = a^b;a = a^b;
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

map<int, u_set<int>> cls;
map<int, int> cnt;


int main() {
	int n;
	scan(n);
	vector<ll> s(n);
	DFP(i,n){
		scanf("%lld", =s[i]);
		if(s[i] < 0) s[i] = -s[i];
	}
	ll res = 0, idx = 0;
	sort(BE(s));
	for(ll x : s){
		// cout << x << endl;
		// auto findx = upper_bound(s.begin(), s.end(), x);
		auto find2x = upper_bound(s.begin(), s.end(), 2*x);
		res += (find2x - s.begin());
		idx++;
		res -= idx;
		// cout << "#" << res << endl;
	}
	cout << res << endl;
	return 0; 
}