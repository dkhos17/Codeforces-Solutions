
/*
 * Problem: 1504B Flip-the-Bits
 * Author: Harold-Finch
 * Date: Saturday, April 3, 2021 6:57 PM
 * Status: Accepted, 61 ms, 1536000 bytes
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
	string a,b;
	cin >> n >> a >> b;
	
	int one = 0, zero = 0;
	FOR(i,0,n) {
		if(a[i] == '0') zero++;
		else one++;
	}
	int flip = 0;
	FOL(i,n-1,0) {
		// cout << zero << " : " << one << endl;
		if(!flip == a[i] == b[i]) {
			if(a[i] == '0') zero--;
			else one--;
			continue;
		}
		if(flip == a[i] != b[i]) {
			if(a[i] == '0') zero--;
			else one--;
			continue;
		}
		if(zero != one) {
			return NO, 0;
		}
		if(a[i] == '0') zero--;
		else one--;
		flip = !flip;
	}
	YES;
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