
/*
 * Problem: 1167B Lost-Numbers
 * Author: Harold-Finch
 * Date: Wednesday, May 15, 2019 7:37 PM
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
	set<int> s;
    s.insert(4);
    s.insert(8);
    s.insert(15);
    s.insert(16);
    s.insert(23);
    s.insert(42);
    vector<int> res;
    cout << '?' << " " << 1 << " " << 1 << endl;
    fflush(stdout);
    int a1;
    cin >> a1;
    if(a1 == 0) return 0;
    a1 = sqrt(a1);
    res.pb(a1);
    s.erase(a1);

    cout << '?' << " " << 2 << " " << 2 << endl;
    fflush(stdout);
    int a2;
    cin >> a2;
    if(a2 == 0) return 0;
    a2 = sqrt(a2);
    res.pb(a2);
    s.erase(a2);

    cout << '?' << " " << 3 << " " << 4 << endl;
    fflush(stdout);
    int a34;
    cin >> a34;
    if(a34 == 0) return 0;


    cout << '?' << " " << 4 << " " << 5 << endl;
    fflush(stdout);
    int a45;
    cin >> a45;
    if(a45 == 0) return 0;

    int t3,t4,t5,t6;
    for(int x : s){
        for(int y : s){
            if(x == y) continue;
            if(x*y == a34){
                t3 = x;
                t4 = y;
            }
            if(x*y == a45){
                t5 = x;
                t6 = y;
            }
        }
    }
    // cout << a34 << " " << a45<< endl;
    // cout << t3 << " " << t4 << endl;
    // cout << t5 << " " << t6 << endl;

    if(t3 == t5 || t3 == t6){
        int a4 = t3;
        int a3 = a34/a4;
        int a5 = a45/a4;
        s.erase(a3);
        s.erase(a4);
        s.erase(a5);
        res.pb(a3);
        res.pb(a4);
        res.pb(a5);
    }else if(t4 == t5 || t4 == t6){
        int a4 = t4;
        int a3 = a34/a4;
        int a5 = a45/a4;
        s.erase(a3);
        s.erase(a4);
        s.erase(a5);
        res.pb(a3);
        res.pb(a4);
        res.pb(a5);
    }
    res.pb(*s.begin());

    cout << '!';
    DFP(i,6){
        cout << " " << res[i];
    }
    cout << endl;

    return 0;
}