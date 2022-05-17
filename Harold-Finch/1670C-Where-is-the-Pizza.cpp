
/*
 * Problem: 1670C Where-is-the-Pizza
 * Author: Harold-Finch
 * Date: Friday, May 6, 2022 8:29 PM
 * Status: Accepted, 202 ms, 3788800 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define MOD 1000000007
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

int n;
vector<int> a,b,d;

int parent[5*MAXN];
void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

int solve() {
	cin >> n;
	a.clear(); a.resize(n);
	b.clear(); b.resize(n);
	d.clear(); d.resize(n);
	for(auto= x : a) cin >> x;
	for(auto= x : b) cin >> x;
	for(auto= x : d) cin >> x;

	FOR(i,0,n) {
		make_set(i+1);
	}

	FOR(i,0,n) {
		union_sets(a[i], b[i]);
	}

	
	unordered_map<int,int> cnt, been;
	FOR(i,0,n) {
		if(d[i]) been[find_set(d[i])]++;
		cnt[find_set(i+1)]++;
	}

	ll ans = 0;
	for(auto kv : cnt) {
		if(!been.count(kv.F) == kv.S > 1)
			ans++;
	}

	ll PW = 1;
	FOR(i,0,ans) {
		PW = (PW*2ll)%MOD;
	}

	cout << PW << endl;

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