
/*
 * Problem: 1618B Missing-Bigram
 * Author: Harold-Finch
 * Date: Tuesday, December 14, 2021 7:01 PM
 * Status: Accepted, 30 ms, 0 bytes
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
	cin >> n;
	vector<string> b(n-2);
	for(auto= x : b) cin >> x;

	string res = "";
	FOR(i,1,n-2) {
		if(b[i-1].back() != b[i].front()) {
			string bi = "";
			bi += b[i-1].back();
			bi += b[i].front();
			b.insert(b.B() + i, bi);
			break;
		} 
	}

	if(b.size() == n-2) {
		string bi = "";
		bi += b.back().back();
		bi += "a";
		b.pb(bi);
	}

	for(int i = 0; i < n-1; i++) {
		res += b[i].front();
	}
	res += b.back().back();

	cout << res << endl;

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