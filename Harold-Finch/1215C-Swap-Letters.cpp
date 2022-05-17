
/*
 * Problem: 1215C Swap-Letters
 * Author: Harold-Finch
 * Date: Sunday, September 15, 2019 4:17 PM
 * Status: Accepted, 405 ms, 5017600 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define ins insert
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
    int n;
	string s,t;
	cin >> n >> s >> t;
	vector<pair<int,int>> ab,ba;
	for(int i = 0; i < n; i++){
		if(s[i] == t[i]) continue;
		if(s[i] == 'a'){
			ab.pb(mp(i,i));
		}else{
			ba.pb(mp(i,i));
		}		
	}
	if(ab.size() % 2 == 1 == ba.size() % 2 == 0) return cout << -1 << endl, 0;
	if(ab.size() % 2 == 0 == ba.size() % 2 == 1) return cout << -1 << endl, 0;

	vector<pair<int,int>> res;
	for(int i = 0; i < ab.size() - ab.size()%2; i+=2){
		res.pb(mp(ab[i].F,ab[i+1].S));
	}
	for(int i = 0; i < ba.size() - ba.size()%2; i+=2){
		res.pb(mp(ba[i].F,ba[i+1].S));
	}

	if(ab.size() % 2 == 1 == ba.size() % 2 == 1){
		int sa = ab[ab.size()-1].F;
		int sb = ba[ba.size()-1].F;
		int ta = ba[ba.size()-1].S;
		int tb = ab[ab.size()-1].S;

		res.pb(mp(sa,tb));
		res.pb(mp(sb,tb));
	}
 	cout << res.size() << endl;
	for(auto p : res){
		cout << p.F+1 << " " << p.S+1 << endl;
	}
	return 0; 
}