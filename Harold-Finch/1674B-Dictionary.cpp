
/*
 * Problem: 1674B Dictionary
 * Author: Harold-Finch
 * Date: Monday, May 2, 2022 6:48 PM
 * Status: Accepted, 15 ms, 204800 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define MOD 1e9+7
#define MAXN 100001
#define Pq priority_queue
#define u_set unordered_set
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define FOR(i,from,to) for(int i=from; i<to; i++)
#define FOL(i,from,to) for(int i=from; i>=to; i--)
#define SHOW(v) for(auto x : v) cout << x << " "; cout << endl;
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

unordered_map<string,int> DICT;

int solve() {
	string s;
	cin >> s;

	cout << DICT[s] << endl;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;

	FOR(i,0,26) {
		FOR(j,0,26) {
			if(i == j) continue;
			string w = (string)"" + (char)('a'+i) + (char)('a'+j); 
			DICT[w] = DICT.size()+1;
		}
	}

	while(t--)
		solve();
	
	return 0; 
}