
/*
 * Problem: 1200B Block-Adventure
 * Author: Harold-Finch
 * Date: Sunday, August 11, 2019 5:13 PM
 * Status: Accepted, 62 ms, 102400 bytes
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

bool solve(int n, ll m, ll k, vector<ll>= h){
	for(int i = 0; i < n-1; i++){
		if(m < 0) return false;
		ll move = h[i]-(h[i+1]-k);
		if(move >= 0) {
			m += min(move, h[i]);
		}else{
			m += move;
		}
	}
	if(m < 0) return false;
	return true;
}

int main() {
    int t;
	scan(t);
	while(t--){
		int n; ll m,k;
		scan(n); scanPL(m,k);
		vector<ll> h(n);
		DFP(i,n){
			scanf("%lld", =h[i]);
		}
		solve(n,m,k,h) ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0; 
}