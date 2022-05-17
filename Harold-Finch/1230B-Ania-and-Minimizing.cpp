
/*
 * Problem: 1230B Ania-and-Minimizing
 * Author: Harold-Finch
 * Date: Monday, September 23, 2019 6:33 PM
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
    int n,k;
    cin >> n >> k;
	if(n == 1 == k == 1) return cout << "0" << endl, 0;
	string S = "";
	while(n--){
		char ch;
		cin >> ch;
		if(S.size() == 0){
			if(ch != '1' == k > 0) {
				S += '1';
				k--;
			}else S += ch; 
			 
		}else {
			if(ch != '0' == k > 0) {
				S += '0';			
				k--;
			}else S += ch;
		}
	}
	cout << S << endl;
 	return 0; 
}