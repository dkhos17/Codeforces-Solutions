
/*
 * Problem: 1195A Drinks-Choosing
 * Author: Harold-Finch
 * Date: Wednesday, July 17, 2019 6:43 PM
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

map<int,int> cnt;

int main() {
	int n,k;
	scanP(n,k);
	vector<int> d(n);
	int res = 0;
	DFP(i,n){
		scan(d[i]);
		cnt[d[i]]++;
	}

	for(auto kv : cnt){
		res += (kv.S-kv.S%2);
	}
	res += (n-res+1)/2;
	cout << res << endl;
	return 0; 
}