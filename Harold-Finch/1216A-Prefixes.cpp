
/*
 * Problem: 1216A Prefixes
 * Author: Harold-Finch
 * Date: Saturday, September 21, 2019 11:25 AM
 * Status: Accepted, 31 ms, 512000 bytes
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
	string s;
	cin >> s;
	int a = 0, b = 0, res = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'a') a++;
		else b++;
		if(i % 2 == 0) continue;
		if(i % 2 == 1 == a != b){
			if(s[i] == 'b') s[i] = 'a';
			else s[i] = 'b';
			a = b = 0;
			res++;
		}
	}
	cout << res << endl;
	cout << s << endl;
	return 0; 
}