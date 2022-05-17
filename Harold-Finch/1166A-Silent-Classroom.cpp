
/*
 * Problem: 1166A Silent-Classroom
 * Author: Harold-Finch
 * Date: Friday, May 17, 2019 7:17 PM
 * Status: Accepted, 31 ms, 102400 bytes
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

map<char,int> cnt;

int main() {
    int n;
    scan(n);
    multiset<string> names;
    DFP(i,n){
        string name;
        cin >> name;
        cnt[name[0]]++;
    }
    ll res = 0;
    for(char c = 'a'; c <= 'z'; c++){
        if(cnt[c] == 0) continue;
        ll f = cnt[c]/2;
        ll s = cnt[c] - f;
        res += f*(f-1)/2;
        res += s*(s-1)/2;
    }
    cout << res << endl;
	return 0; 
}