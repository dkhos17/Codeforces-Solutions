
/*
 * Problem: 1178B WOW-Factor
 * Author: Harold-Finch
 * Date: Saturday, July 20, 2019 7:50 PM
 * Status: Accepted, 280 ms, 41369600 bytes
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

 map<ll,ll> bfr, aftr;
 
int main() {
    ios::sync_with_stdio(0);  cin.tie(0);
	string s;
	cin >> s;
	ll ws = 0, res = 0;
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] == 'v' == s[i+1] == 'v') ws++;
		if(s[i] == 'o') bfr[i] = ws;
	}
	ws = 0;
	for(int i = s.size()-1; i > 0; i--){
		if(s[i] == 'v' == s[i-1] == 'v') ws++;
		if(s[i] == 'o') aftr[i] = ws;
	}

	for(auto kv : bfr){
		// cout << kv.F << " " << kv.S << " " <<aftr[kv.F] << endl;
		res += kv.S*aftr[kv.F];
	}
	cout << res << endl;
	return 0; 
}