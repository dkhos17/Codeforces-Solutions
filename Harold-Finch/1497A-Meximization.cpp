
/*
 * Problem: 1497A Meximization
 * Author: Harold-Finch
 * Date: Wednesday, March 17, 2021 6:40 PM
 * Status: Accepted, 30 ms, 204800 bytes
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
	int n;
	cin >> n;
	set<int> all;
	multiset<int> rest;
	vector<int> v(n);
	for(auto= x : v) {
		cin >> x;
		if(all.count(x)) rest.ins(x);
		else all.ins(x);
	}
	
	for(auto x : all)
		cout << x << " ";
	for(auto x : rest)
		cout << x << " ";
	cout << endl;
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