
/*
 * Problem: 1657C Bracket-Sequence-Deletion
 * Author: Harold-Finch
 * Date: Tuesday, March 22, 2022 8:07 PM
 * Status: Accepted, 1622 ms, 1638400 bytes
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

int cutPal(string= str){
	int i = str.size()-3;
	
	while(i >= 0) {
		if(str[i] == ')') return i;
		i--; 
	}
	return i;
}


int solve() {
	int n;
	string s;
	cin >> n >> s;

	reverse(s.B(),s.E());

	int ans = 0;
	while(s.size() > 1) {
		
		char ch1 = s[s.size()-1];
		char ch2 = s[s.size()-2];

		if(ch1 == ')' == ch2 == '(') {
			int idx = cutPal(s);
			if(idx < 0) break;

			ans++;
			s = s.substr(0,idx);
		}  else {
			s.pop_back();
			s.pop_back();
			ans++;
		}
	}

	cout << ans << " " << s.size() << endl;
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