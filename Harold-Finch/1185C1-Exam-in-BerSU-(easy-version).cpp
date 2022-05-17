
/*
 * Problem: 1185C1 Exam-in-BerSU-(easy-version)
 * Author: Harold-Finch
 * Date: Wednesday, June 19, 2019 7:52 PM
 * Status: Accepted, 31 ms, 1740800 bytes
 * Language: GNU C++14
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define Pq priority_queue
#define ins insert
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define print(result) printf("%d", result)
#define scan(n) scanf("%d", =n)
#define scanL(n) scanf("%lld", =n)
#define scanP(x,y) scanf("%d %d", =x, =y)
#define scanPL(x,y) scanf("%lld %lld", =x, =y)
#define BE(v) v.begin(), v.end()
#define RBE(v) v.rbegin(), v.rend()
#define DFP(i, n) for (int i=0; i<n; i++)
#define DFM(i, n) for (int i=n-1; i>=0; i--)
#define F first
#define S second


ll pref[2*MAXN];

int main() {
    ll n,m;
	scanPL(n,m);
	ll t[n];
	DFP(i,n){
		scanL(t[i]);
		if(i) pref[i] = pref[i-1] + t[i];
		else pref[i] = t[i];
	}

	multiset<ll> all;
	for(int i = 0; i < n; i++){
		if(pref[i] <= m) cout << 0 << " ";
		else{
			ll sum = pref[i], cnt = 0;
			for(auto it = all.begin(); it != all.end(); it++){
				sum += (*it);
				cnt++;
				if(sum <= m) {
					cout << cnt << " ";
					break;
				}
			}
		}
		all.ins(-t[i]);
	}
	return 0; 
}