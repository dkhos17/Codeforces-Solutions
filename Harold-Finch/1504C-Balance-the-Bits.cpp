
/*
 * Problem: 1504C Balance-the-Bits
 * Author: Harold-Finch
 * Date: Saturday, April 3, 2021 8:43 PM
 * Status: Accepted, 108 ms, 2560000 bytes
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
	int n;
	string s;
	cin >> n >> s;
	
	vector<int> ones;
	FOR(i,0,n) {
		if(s[i] == '1') ones.pb(i);
	}

	int m = ones.size();
	int suma = 0, sumb = 0;
	string a = s, b = s;
	if(s[0] != '1' || m % 2 != 0) return NO, 0;

	FOR(i,0,m/2) {
		a[ones[i]] = '('; a[ones[m-i-1]] = ')';
		b[ones[i]] = '('; b[ones[m-i-1]] = ')';
	} 
	int zero = 0;
	FOR(i,0,n) {
		// cout << a << " " << b << endl;
		if(suma < 0 || sumb < 0) return NO, 0;
		if(s[i] == '0') {
			if(zero % 2 == 0) a[i] = ')', b[i] = '(';
			else a[i] = '(', b[i] = ')';
			zero++;
		}
		if(a[i] == '(') suma++;
		else suma--;
		if(b[i] == '(') sumb++;
		else sumb--;
	}

	if(suma == 0 == sumb == 0) YES, cout << a << endl, cout << b << endl, 0;
	else NO;
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