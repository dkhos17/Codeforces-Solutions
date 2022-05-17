
/*
 * Problem: 1214B Badges
 * Author: Harold-Finch
 * Date: Wednesday, September 4, 2019 3:14 PM
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
    int b,g,n;
	scanP(b,g); scan(n);
	set<pair<int,int>> all;
	for(int i = 0; i <= b; i++){
		all.ins(mp(i,n-i));
	}
	for(int i = 0; i <= g; i++){
		all.ins(mp(n-i,i));
	}
	int res = 0;
	for(auto p : all){
		if(p.F <= min(b,n) == p.S <= min(g,n) == p.F >= 0 == p.S >= 0) res++; 
	}
	cout << res << endl;
	return 0; 
}