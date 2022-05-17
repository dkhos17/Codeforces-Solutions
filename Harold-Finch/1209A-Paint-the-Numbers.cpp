
/*
 * Problem: 1209A Paint-the-Numbers
 * Author: Harold-Finch
 * Date: Saturday, September 14, 2019 5:13 PM
 * Status: Accepted, 15 ms, 0 bytes
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
	vector<int> v(n), been(n);
	DFP(i,n){
		cin >> v[i];
		been[i] = false;
	}
	sort(BE(v));
	int cl = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(been[i]) continue;
		cl++;
		for(int j = i+1; j < n; j++){
			if(been[j]) continue;
			if(v[j] % v[i] == 0) been[j] = true;
		}
	}
	cout << cl << endl;
	return 0; 
}