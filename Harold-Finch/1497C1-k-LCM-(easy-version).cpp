
/*
 * Problem: 1497C1 k-LCM-(easy-version)
 * Author: Harold-Finch
 * Date: Wednesday, March 17, 2021 8:00 PM
 * Status: Accepted, 62 ms, 0 bytes
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second

int solve() {
	ll n,k;
	cin >> n >> k;

	if(n % 2 == 1) {
		cout << 1 << " " << n/2 << " " << n/2 << endl;
	} else {
		for(ll i = 2; i <= min(n/2, 100ll*MAXN); i += 2) {
			if(i*(n-i)/2/__gcd(i, (n-i)/2) <= n/2) {
				cout << i << " " << (n-i)/2 << " " << (n-i)/2 << endl;
				return 0;
			}
		}
		for(ll i = 1; i < min(n/2, 10ll*MAXN); i++) {
			if((n-i)/2*((n-i)/2+1) <= n/2) {
				cout << 1 << " " << (n-i)/2 << " " << (n-i)/2 + 1 << endl;
				return 0;
			}
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}