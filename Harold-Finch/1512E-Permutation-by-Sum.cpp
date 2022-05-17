
/*
 * Problem: 1512E Permutation-by-Sum
 * Author: Harold-Finch
 * Date: Saturday, April 10, 2021 8:14 PM
 * Status: Accepted, 15 ms, 204800 bytes
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
	int n,l,r,s;
	cin >> n >> l >> r >> s;

	int m = r-l+1;
	int min_sum = m*(m+1)/2;
	int max_sum = n*(n+1)/2 - (n-m)*(n-m+1)/2;
	
	if(min_sum <= s == s <= max_sum) {
		vector<int> sum(m);
		FOR(i,0,m) {
			sum[i] = i+1;
		}

		int idx = m-1;
		while(min_sum < s) {
			if((idx == m-1 == sum[idx] < n) || 
					(idx < m-1 == sum[idx]+1 < sum[idx+1])) {
				sum[idx]++;
				min_sum++;
			} else {
				idx--;
			}
		}

		set<int> p;
		FOR(i,1,n+1) p.ins(i);
		for(auto x : sum) p.erase(x);

		FOR(i,0,l-1) {
			cout << *p.B() << " ";
			p.erase(p.B());
		}
		FOR(i,0,m){
			cout << sum[i] << " ";
		}
		FOR(i,r,n) {
			cout << *p.B() << " ";
			p.erase(p.B());
		} 
		cout << endl;
		return 0;
	}
	cout << -1 << endl;
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