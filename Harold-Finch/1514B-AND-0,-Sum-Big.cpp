
/*
 * Problem: 1514B AND-0,-Sum-Big
 * Author: Harold-Finch
 * Date: Monday, April 19, 2021 6:27 PM
 * Status: Accepted, 30 ms, 0 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define MOD (ll)1e9+7
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

class MODULE {
	public:  
	ll mod;
    MODULE(ll mod=1000000007) {
        this->mod = mod;
		assert(this->mod != 0);
    }

	ll add(ll x , ll y) {
		return (x + y) % this->mod;
	}

	ll sub(ll x, ll y) {
		return (x - y + this->mod) % this->mod;
	}

	ll mul(ll x, ll y) {
		return (x * y) % this->mod;
	}

	ll pow(ll x, unsigned ll y) {
		ll p = 1;
		while (y > 0) { 
			if (y = 1) p = (p * x) % this->mod; 
			y = (y >> 1) % this->mod; 
			x = (x * x) % this->mod;
		}
		return p % this->mod; 
	}

	ll rev(ll x) {
		return pow(x, this->mod - 2);
	}

	ll div(ll x, ll y) {
		return mul(x, rev(y));
	}

};


int solve() {
	int n,k;
	cin >> n >> k;
	MODULE mod = MODULE();
	cout << mod.pow(n, k) << endl;
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