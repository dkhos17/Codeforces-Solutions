
/*
 * Problem: 1163B1 Cat-Party-(Easy-Edition)
 * Author: Harold-Finch
 * Date: Thursday, May 9, 2019 8:39 PM
 * Status: Accepted, 93 ms, 512000 bytes
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

map<int,int> cnt1, cnt2;

int main() {
	int n;
    scan(n);
    vector<int> u(n);
    u_set<int> all;
    int up = 0;
    DFP(i,n){
        scan(u[i]);
        cnt1[u[i]]++;
        all.insert(u[i]);
    }
    int rep = 0, res = 0;
    int val = u[0];

    for(int i = n-1; i >= 0; i--){
        set<int> check;
        map<int, int> m;
        int e = -1;
        for(int x : all){
           if(check.size() > 2) break;
            int cnt = cnt1[x] - cnt2[x];
            if(cnt > 0){
                check.insert(cnt);
                m[cnt]++;
            }
        }
    
       if(check.size() == 2){
           auto it1 = check.begin();
           auto it2 = check.rbegin();
           if(*it1 == 1){
               if(m[*it1] == 1) return cout << i+1 << endl, 0;
           }
           if(*it2 - *it1 == 1){
               if(m[*it2] == 1) return cout << i+1 << endl, 0;
           }
       }
       if(check.size() == 1){
           if(*check.begin() == 1 || m[*check.begin()] == 1) return cout << i+1 << endl, 0;
       }
       cnt2[u[i]]++;
    }

    cout << min(2,n) << endl;



	return 0; 
}