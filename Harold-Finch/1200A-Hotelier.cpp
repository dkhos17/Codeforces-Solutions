
/*
 * Problem: 1200A Hotelier
 * Author: Harold-Finch
 * Date: Sunday, August 11, 2019 4:40 PM
 * Status: Accepted, 46 ms, 307200 bytes
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

int h[10];

int main() {
	ios::sync_with_stdio(0);  cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == 'L'){
			for(int j = 0; j < 10; j++){
				if(h[j]) continue;
				h[j] = 1;
				break;
			}
		}else if(s[i] == 'R'){
			for(int j = 9; j >= 0; j--){
				if(h[j]) continue;
				h[j] = 1;
				break;
			}
		}else{
			h[s[i]-'0'] = 0;
		}
	}
	for(int i = 0; i < 10; i++){
		cout << h[i];
	}
	cout << endl;
	return 0; 
}