
/*
 * Problem: 1165C Good-String
 * Author: Harold-Finch
 * Date: Tuesday, May 14, 2019 7:35 PM
 * Status: Accepted, 46 ms, 716800 bytes
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



int main() {
	int n;
	string s;
	cin >> n >> s;

	string res = "";
	for(int i = 0; i < n-1; i++){
		if(s[i] != s[i+1]) {
			res += s[i];
			res += s[i+1];
			i++;
		}
	}
	cout << s.size() - res.size()  << endl << res << endl;
	return 0; 
}