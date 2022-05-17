
/*
 * Problem: 1674F Desktop-Rearrangement
 * Author: Harold-Finch
 * Date: Monday, May 2, 2022 8:57 PM
 * Status: Accepted, 716 ms, 9625600 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ins insert
#define Pq priority_queue
#define u_set unordered_set
#define MOD 1000000007
#define MAXN 100001
#define set_val(arr,v) memset(arr, v, sizeof(arr))
#define FOR(i,from,to) for(int i=from; i<to; i++)
#define FOL(i,from,to) for(int i=from; i>=to; i--)
#define B() begin()
#define E() end()
#define F first
#define S second

int gr[1001][1001];

int MaxVal = 1000000;
int tree[1000001];

void update(int idx ,int val){
    while (idx <= MaxVal){
        tree[idx] += val;
        idx += (idx = -idx);
    }
}

int read(int idx){
    int sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx = idx - (idx = -idx);
    }
    return sum;
}


int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int n,m,q;
	cin >> n >> m >> q;
	FOR(i,0,n) {
		FOR(j,0,m) {
			char ch;
			cin >> ch;
			if(ch == '*') gr[i][j] = 1;
		}
	}

	vector<pair<int,int>> Q(q);
	for(auto =x : Q) cin >> x.F >> x.S;

	int idx = 1;
	FOR(j,0,m) {
		FOR(i,0,n) {
			if(gr[i][j]) update(idx, 1);
			idx++;
		}
		
	}

	FOR(i,0,q) {
		int x = Q[i].F-1;
		int y = Q[i].S-1;

		gr[x][y] = !gr[x][y];

		if(gr[x][y]) update(y*n + x+1, 1);
		else update(y*n + x+1, -1);

		int tot = read(n*m);
		int ans = tot - read(tot);
		cout << ans << endl;
	}

	return 0; 
}