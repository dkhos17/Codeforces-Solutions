
/*
 * Problem: 1216B Shooting
 * Author: Harold-Finch
 * Date: Saturday, September 21, 2019 11:37 AM
 * Status: Accepted, 15 ms, 204800 bytes
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
	vector<int> a(n);
	set<pair<int,int>> all;
	for(int i  = 0; i < n; i++){
		cin >> a[i];
		all.ins(mp(-a[i], i));
	}
	int x = 0;
	ll res = 0;	
	for(auto p : all){
		res += (1ll*x*(-p.F) + 1);
		x++;
	}
	cout << res << endl;
	for(auto x : all){
		cout << x.S+1 << " ";
	}
	return 0; 
}