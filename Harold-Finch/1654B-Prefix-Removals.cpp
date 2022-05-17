
/*
 * Problem: 1654B Prefix-Removals
 * Author: Harold-Finch
 * Date: Sunday, March 20, 2022 3:55 PM
 * Status: Accepted, 46 ms, 716800 bytes
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
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	string s;
	cin >> s;

	unordered_map<char, int> cnt;
	FOR(i,0,s.size()) cnt[s[i]]++;

	int i = 0;
	while(i < s.size()) {
		if(cnt[s[i]] == 1) break;
		cnt[s[i]]--;
		i++;
	}

	cout << s.substr(i, s.size()) << endl;;

	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}