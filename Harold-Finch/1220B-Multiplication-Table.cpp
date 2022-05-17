
/*
 * Problem: 1220B Multiplication-Table
 * Author: Harold-Finch
 * Date: Wednesday, September 18, 2019 8:45 PM
 * Status: Accepted, 296 ms, 7987200 bytes
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
	ios::sync_with_stdio(0);  cin.tie(0);
   	int n;
	cin >> n;
	ll M[n+1][n+1];
	DFP(i,n){
		DFP(j,n){
			cin >> M[i][j];
		}
	}

	vector<ll> a(n);
	ll a1 = M[0][1];
	for(int j = 1; j < n; j++){
			a1 = __gcd(a1, M[0][j]);
	}

	for(int i = 1; i <= sqrt(a1); i++){
		if(a1 % i == 0){
			bool flag = true;
			a[0] = a1/i;
			for(int j = 1; j < n; j++){
				a[j] = M[0][j]/a[0]; 
			}
			for(int t = 0; t < n; t++){
				for(int k = 0; k < n; k++){
					if(t == k) continue;
					if(M[t][k] != a[t]*a[k]) {
						flag = false;
						break;
					}
				}
				if(!flag) break;
			}
			if(flag){
				for(int j = 0; j < n; j++){
					cout << a[j] << " ";
				}
				return 0;
			}

			flag = true;
			a[0] = i;
			for(int j = 1; j < n; j++){
				a[j] = M[0][j]/a[0]; 
			}
			for(int t = 0; t < n; t++){
				for(int k = 0; k < n; k++){
					if(t == k) continue;
					if(M[t][k] != a[t]*a[k]) {
						flag = false;
						break;
					}
				}
				if(!flag) break;
			}
			if(flag){
				for(int j = 0; j < n; j++){
					cout << a[j] << " ";
				}
				return 0;
			}
		}
	}
	return 0; 
}