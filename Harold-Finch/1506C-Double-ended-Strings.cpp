
/*
 * Problem: 1506C Double-ended-Strings
 * Author: Harold-Finch
 * Date: Thursday, March 25, 2021 7:14 PM
 * Status: Accepted, 15 ms, 0 bytes
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define B() begin()
#define E() end()
#define F first
#define S second


string X, Y;
int C[22][22];

int LCSubStr()
{
    int m = X.size();
	int n = Y.size();
 
    int LCSuff[m + 1][n + 1];
    int result = 0; 
 
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int solve() {
	cin >> X >> Y;
	cout << X.size() + Y.size() - 2*LCSubStr() << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}