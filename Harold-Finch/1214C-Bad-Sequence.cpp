
/*
 * Problem: 1214C Bad-Sequence
 * Author: Harold-Finch
 * Date: Wednesday, September 4, 2019 1:37 PM
 * Status: Accepted, 46 ms, 512000 bytes
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
	string s;
	cin >> n >> s;

	int sum = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') sum++;
		else sum--;
		if(sum < -1) cnt++;
	}
	if(sum != 0) return cout << "NO" << endl, 0;
	if(cnt) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0; 
}