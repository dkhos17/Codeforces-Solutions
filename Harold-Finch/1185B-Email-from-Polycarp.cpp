
/*
 * Problem: 1185B Email-from-Polycarp
 * Author: Harold-Finch
 * Date: Wednesday, June 19, 2019 7:31 PM
 * Status: Accepted, 686 ms, 16486400 bytes
 * Language: GNU C++14
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
	cin >> n;

	while(n--){
		string s,t;
		cin >> s >> t;
		if(t.size() < s.size()) {
			cout << "NO" << endl;
			continue;
		}
		if(s.size() == 0) {
			cout << "YES" << endl;
			continue;
		}
		string r1 = "", r2 = "";
		r1 += s[0];
		r2 += t[0];
		vector<int> cnt1,cnt2;
		int c1 = 1, c2 = 1;
		for(int i = 1; i < s.size(); i++){
			if(s[i-1] == s[i]) c1++;
			else {
				cnt1.pb(c1);
				c1 = 1;
			}
			if(s[i-1] == s[i]) continue;
			r1 += s[i];
		}
		cnt1.pb(c1);
		for(int i = 1; i < t.size(); i++){
			if(t[i-1] == t[i]) c2++;
			else{
				cnt2.pb(c2);
				c2 = 1;
			}
			if(t[i-1] == t[i]) continue;
			r2 += t[i];
		}
		cnt2.pb(c2);
		if(r1 != r2) {
			cout << "NO" << endl;
			continue;
		}
		bool ans = true;
		for(int i = 0; i < min(cnt1.size(),cnt2.size()); i++){
			if(cnt1[i] <= cnt2[i]) continue;
			ans = false;
			break;
		}
		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0; 
}