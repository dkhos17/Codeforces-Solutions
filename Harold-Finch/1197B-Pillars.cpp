
/*
 * Problem: 1197B Pillars
 * Author: Harold-Finch
 * Date: Monday, July 22, 2019 6:49 PM
 * Status: Accepted, 109 ms, 8192000 bytes
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
	set<pair<int,int>> check;
	vector<int> a(n);
	
	DFP(i,n){
		scan(a[i]);
		check.ins(mp(a[i],i));
	}
	if(check.size() != n) return cout << "NO" << endl, 0;

	int dest = (*check.rbegin()).S;

	int dp[n+1];
	dp[0] = a[0];
	for(int i = 1; i < dest; i++){
		dp[i] = max(a[i], dp[i-1]);
		if(dp[i] > a[i]) return cout << "NO" << endl, 0;
	}

	dp[n-1] = a[n-1];
	for(int i = n-2; i > dest; i--){
		dp[i] = max(a[i], dp[i+1]);
		if(dp[i] > a[i]) return cout << "NO" << endl, 0;
	}
	cout << "YES" << endl;
	return 0; 
}