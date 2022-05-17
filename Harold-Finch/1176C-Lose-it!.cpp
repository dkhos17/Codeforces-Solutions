
/*
 * Problem: 1176C Lose-it!
 * Author: Harold-Finch
 * Date: Sunday, June 9, 2019 7:27 PM
 * Status: Accepted, 218 ms, 18227200 bytes
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
	scan(n);
	vector<int> a(n);
	DFP(i,n){
		scan(a[i]);
	}
	
	set<int> s1,s2,s3,s4,s5,s6;

	for(int i = 0; i < n; i++){
		if(a[i] == 4){
			s1.ins(i);
		}else if(a[i] == 8){
			s2.ins(i);
		}else if(a[i] == 15){
			s3.ins(i);
		}else if(a[i] == 16){
			s4.ins(i);
		}else if(a[i] == 23){
			s5.ins(i);
		}else if(a[i] == 42){
			s6.ins(i);
		}
	}
	if(s1.size() == 0 || s2.size() == 0 || s3.size() == 0 || s4.size() == 0 || s5.size() == 0 || s6.size() == 0) return cout << n << endl, 0;

	int res = 0;
	while(true){
	if(s1.size() == 0 || s2.size() == 0 || s3.size() == 0 || 
			s4.size() == 0 || s5.size() == 0 || s6.size() == 0) break;

		int idx = *s1.begin();
		s1.erase(s1.begin());
		
		auto it = s2.lower_bound(idx);		
		if(it == s2.end()) break;
		idx = *it;
		s2.erase(it);

		it = s3.lower_bound(idx);		
		if(it == s3.end()) break;
		idx = *it;
		s3.erase(it);

		it = s4.lower_bound(idx);		
		if(it == s4.end()) break;
		idx = *it;
		s4.erase(it);

		it = s5.lower_bound(idx);		
		if(it == s5.end()) break;
		idx = *it;
		s5.erase(it);

		it = s6.lower_bound(idx);		
		if(it == s6.end()) break;
		idx = *it;
		s6.erase(it);

		res++;
	}
	cout << n - 6*res << endl;

	return 0; 
}