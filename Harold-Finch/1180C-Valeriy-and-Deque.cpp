
/*
 * Problem: 1180C Valeriy-and-Deque
 * Author: Harold-Finch
 * Date: Friday, June 21, 2019 10:32 PM
 * Status: Accepted, 1201 ms, 3276800 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define print(result) printf("%d", result)
#define scan(n) scanf("%d", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


int main() {
    int n,q;
	scanP(n,q);
	deque<int> dq;
	int mx = INT_MIN;
	DFP(i,n){
		int e;
		scan(e);
		mx = max(mx,e);
		dq.push_back(e);
	}
	unordered_map<int, pair<int,int>> res;
	int j = 1, test = 20;
	while(dq.front() != mx){
			int a = dq.front(); dq.pop_front();
			int b = dq.front(); dq.pop_front();
			if(a > b) {
				dq.push_front(a);
				dq.push_back(b);
			}else{
				dq.push_front(b);
				dq.push_back(a);
			}
			res[j++] = mp(a,b);
	}
	// for(auto x : dq){
	// 	cout << x << " ";
	// }
	// cout << endl;
	if(q == 0) return 0;
	while(q--){
		ll m;
		scanf("%lld", =m);
		if(m < j) cout << res[m].F << " " << res[m].S << endl;
		else cout << mx << " " << dq.at((m-j)%(n-1) + 1) << endl; 
	}
	return 0; 
}