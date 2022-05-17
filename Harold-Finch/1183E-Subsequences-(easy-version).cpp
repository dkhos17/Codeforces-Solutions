
/*
 * Problem: 1183E Subsequences-(easy-version)
 * Author: Harold-Finch
 * Date: Wednesday, June 26, 2019 11:31 PM
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

set<string> all;

int main() {
	int n,k;
	scanP(n,k);
	string s, t;
	cin >> s;
	queue<string> Q;
	Q.push(s);
	all.ins(s);
	while(!Q.empty()){
		string curr = Q.front();
		Q.pop();
		for(int i = 0; i < curr.size(); i++){
			string str = curr.substr(0,i) + curr.substr(i+1);
			if(all.count(str)) continue;
			if(all.size() >= k) break;
			Q.push(str);
			all.ins(str);
		}
		if(all.size() >= k) break;
	}
	// for(auto st : all){
	// 	cout << st << " ";
	// }
    
	if(all.size() < k) return cout << -1 << endl, 0;
	ll res = 0;
	for(auto sb : all){
		res += (n-sb.size());
	}
	cout << res << endl;
	return 0; 
}