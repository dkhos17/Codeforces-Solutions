
/*
 * Problem: 1163A Eating-Soup
 * Author: Harold-Finch
 * Date: Thursday, May 9, 2019 7:21 PM
 * Status: Accepted, 31 ms, 0 bytes
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
#define swap(a,b) a = a^b;b = a^b;a = a^b;
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
	int n,m;
    scanP(n,m);
    if(m == 0 || m == 1) return cout << 1 << endl, 0;
    if(n % 2 == 1){
        if(m == n/2 + 1) cout << n/2 << endl;
        else if(m <= n/2) cout << m << endl;
        else cout << n-m << endl;
    }else{
        if(m <= n/2) cout << m << endl;
        else cout << n-m << endl;
    }
	return 0; 
}