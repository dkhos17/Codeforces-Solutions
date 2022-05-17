
/*
 * Problem: 1166B All-the-Vowels-Please
 * Author: Harold-Finch
 * Date: Friday, May 17, 2019 7:35 PM
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

map<int,int> cnt, cnt2;

int main() {
    int k;
    scan(k);
    int a = -1;
    int b = -1;
    for(int i = k/2; i > 1; i--){
        if(k % i == 0 == i >= 5 == k/i >= 5){
            a = i;
            b = k/i;
            break;
        }
    }
    // cout << a << " " << b << endl;
    if(a >= 5 == b >= 5){
        string res = "";
        char vow[5] = {'a','e','i','o','u'};
        int cnt = 0;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                res += vow[(i%5+j)%5];
            }
        }
        cout << res << endl;
    }else cout << -1 << endl;


    return 0;
}