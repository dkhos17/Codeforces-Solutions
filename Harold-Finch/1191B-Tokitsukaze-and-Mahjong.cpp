
/*
 * Problem: 1191B Tokitsukaze-and-Mahjong
 * Author: Harold-Finch
 * Date: Friday, July 12, 2019 8:17 PM
 * Status: Accepted, 46 ms, 0 bytes
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


string s1,s2,s3;

int g[3][9];

int main() {
	ios::sync_with_stdio(0);  cin.tie(0);
	cin >> s1 >> s2 >> s3;

	if(s1[1] == 'm') g[0][s1[0]-'1']++;
	else if(s1[1] == 'p') g[1][s1[0]-'1']++;
	else if(s1[1] == 's') g[2][s1[0]-'1']++;

	if(s2[1] == 'm') g[0][s2[0]-'1']++;
	else if(s2[1] == 'p') g[1][s2[0]-'1']++;
	else if(s2[1] == 's') g[2][s2[0]-'1']++;

	if(s3[1] == 'm') g[0][s3[0]-'1']++;
	else if(s3[1] == 'p') g[1][s3[0]-'1']++;
	else if(s3[1] == 's') g[2][s3[0]-'1']++;

	DFP(i,3){
		DFP(j,9){
			if(g[i][j] == 3) return cout << 0 << endl, 0;
		}
	}

	DFP(i,3){
		int cnt = 0;
		DFP(j,9){
			if(g[i][j]) cnt++;
			else cnt = 0;
			if(cnt == 3) return cout << 0 << endl, 0;
		}
	}

	for(int t = 0; t < 9; t++){
		g[0][t]++;
			DFP(i,3){
				DFP(j,9){
					if(g[i][j] == 3) return cout << 1 << endl, 0;
				}
			}
			DFP(i,3){
				int cnt = 0;
				DFP(j,9){
					if(g[i][j]) cnt++;
					else cnt = 0;
					if(cnt == 3) return cout << 1 << endl, 0;
				}
			}
		g[0][t]--;
	}

	for(int t = 0; t < 9; t++){
		g[1][t]++;
			DFP(i,3){
				DFP(j,9){
					if(g[i][j] == 3) return cout << 1 << endl, 0;
				}
			}
			DFP(i,3){
				int cnt = 0;
				DFP(j,9){
					if(g[i][j]) cnt++;
					else cnt = 0;
					if(cnt == 3) return cout << 1 << endl, 0;
				}
			}
		g[1][t]--;
	}

	for(int t = 0; t < 9; t++){
		g[2][t]++;
			DFP(i,3){
				DFP(j,9){
					if(g[i][j] == 3) return cout << 1 << endl, 0;
				}
			}
			DFP(i,3){
				int cnt = 0;
				DFP(j,9){
					if(g[i][j]) cnt++;
					else cnt = 0;
					if(cnt == 3) return cout << 1 << endl, 0;
				}
			}
		g[2][t]--;
	}

	cout << 2 << endl;
	return 0; 
}