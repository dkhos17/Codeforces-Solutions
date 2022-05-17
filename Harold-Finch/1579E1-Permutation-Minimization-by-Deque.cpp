
/*
 * Problem: 1579E1 Permutation-Minimization-by-Deque
 * Author: Harold-Finch
 * Date: Tuesday, September 28, 2021 8:06 PM
 * Status: Accepted, 109 ms, 9523200 bytes
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
	vector<int> p(n);
	for(auto= x : p) cin >> x;

	list<int> dq;
	dq.push_back(p[0]);

	FOR(i,1,n) {
		if(dq.front() < p[i]) dq.push_back(p[i]);
		else dq.push_front(p[i]);
	}

	for(auto x : dq)
		cout << x << " ";
	cout << endl;
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