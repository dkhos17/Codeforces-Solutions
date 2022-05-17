
/*
 * Problem: 1228A Distinct-Digits
 * Author: Harold-Finch
 * Date: Sunday, September 29, 2019 5:22 PM
 * Status: Accepted, 31 ms, 204800 bytes
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


int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int l,r;
	cin >> l >> r;

	for(; l <= r; l++){
		u_set<char> been;
		string s = to_string(l);
		for(char x : s){
			if(been.count(x)) break;
			else been.ins(x);
		}
		if(been.size() == s.size()) 
			return cout << s << endl, 0; 
	}
	cout << -1 << endl;
	return 0; 
}