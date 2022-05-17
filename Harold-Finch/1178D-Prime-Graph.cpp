
/*
 * Problem: 1178D Prime-Graph
 * Author: Harold-Finch
 * Date: Saturday, July 20, 2019 9:57 PM
 * Status: Accepted, 31 ms, 716800 bytes
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

bool prime[5*MAXN]; // true
void SieveOfEratosthenes(int n) { 
    for (int p=2; p*p<=n; p++) { 
        if (prime[p]){
            for (int i = p*p; i <= n; i += p) 
                prime[i] = false; 
        } 
    }
}

int main() {
	int n;
	scan(n);
	set_val(prime, true);
	SieveOfEratosthenes(5*MAXN);
	vector<pair<int,int>> edges;
	for(int i = 0; i < n; i++){
		int x = i % n, y = (i+1) % n;
		edges.pb(mp(x,y));
	}

	if(!prime[edges.size()]){
		u_set<int> been;
		for(int i = 0; i <= n; i++){
			if(prime[edges.size()]) break;
			if(been.count(i)) continue;
			int x = i % n, y = (i+2) % n;
			edges.pb(mp(x,y));
			been.ins(x);
			been.ins(y);
		}	
	}
	cout << edges.size() << endl;
	for(auto e : edges){
		cout << e.F+1 << " " << e.S+1 << endl;
	}
	return 0; 
}