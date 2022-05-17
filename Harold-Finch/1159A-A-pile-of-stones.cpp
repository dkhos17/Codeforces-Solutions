
/*
 * Problem: 1159A A-pile-of-stones
 * Author: Harold-Finch
 * Date: Sunday, May 12, 2019 6:53 PM
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
	int n;
    cin >> n;
    int mn = 0, pl = 0, res = 0;
    string s = "";
    int arr[n+1] = {0};

    for(int i = 0; i < n; i++){
        char op;
        cin >> op;
        s += op;
        if(op == '-') arr[i] = -1;
        else arr[i] = 1;
    }
    int num = min(0, arr[0]);
    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
        num = min(num, arr[i]);
    }
    num *= -1;
    cout << num + arr[n-1] << endl;
	return 0; 
}