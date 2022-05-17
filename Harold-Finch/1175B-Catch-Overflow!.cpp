
/*
 * Problem: 1175B Catch-Overflow!
 * Author: Harold-Finch
 * Date: Wednesday, June 5, 2019 8:03 PM
 * Status: Accepted, 124 ms, 409600 bytes
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
    int l;
	scan(l);
	ll add = 0, loop = 1;
	ll res = 0;
	stack<int> loops, bad;
	bool over = false;
	while(l--){
		string s;
		cin >> s;
		if(s == "add") {
			res += loop;
			if(bad.size() > 0) return cout << "OVERFLOW!!!" << endl, 0;
		} else if(s == "end"){
			if(bad.size() > 0) {
				bad.pop();
			}else if(loops.size() > 0){
				loop /= loops.top();
				loops.pop();
			}
		} else if(s == "for"){			
			ll n;
			cin >> n;
			if(bad.size() > 0) bad.push(n);
			else if(loop * n <  4294967296) {
				loops.push(n);
				loop *= n;
			}else {
				bad.push(n);
			}
		}
		if(res >= 4294967296) return cout << "OVERFLOW!!!" << endl, 0;
	}
	if(res >= 4294967296) return cout << "OVERFLOW!!!" << endl, 0;

	cout << res << endl;
	return 0; 
}