
/*
 * Problem: 1512C A-B-Palindrome
 * Author: Harold-Finch
 * Date: Saturday, April 10, 2021 7:19 PM
 * Status: Accepted, 30 ms, 512000 bytes
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
	int a,b;
	string s;
	cin >> a >> b >> s;

	int n = a+b;
	FOR(i,0,n/2) {
		if(s[i] == s[n-i-1]) {
			if(s[i] == '0') a -= 2;
			if(s[i] == '1') b -= 2;
			continue;
		}
		if(s[i] == '?') {
			s[i] = s[n-i-1];
		} else if(s[n-i-1] == '?'){
			s[n-i-1] = s[i];
		} else {
			return cout << -1 << endl, 0;
		}
		if(s[i] == '0') a -= 2;
		if(s[i] == '1') b -= 2;
	}

	FOR(i,0,n/2) {
		if(a < 0 || b < 0) return cout << -1 << endl, 0;
		if(s[i] != '?') continue;
		if(a >= 2) {
			s[i] = '0';
			s[n-i-1] = '0';
			a -= 2;
		} else if(b >= 2) {
			s[i] = '1';
			s[n-i-1] = '1';
			b -= 2;
		}
	}

	if(a < 0 || b < 0) return cout << -1 << endl, 0;

	if(n % 2) { 
		if(s[n/2] == '?') {
			if(a) s[n/2] = '0', a--;
			else if(b) s[n/2] = '1', b--; 
		} else {
			if(s[n/2] == '0') a--;
			if(s[n/2] == '1') b--;
		}
	}
	if(a == 0 == b == 0) cout << s << endl;
	else cout << -1 << endl;
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