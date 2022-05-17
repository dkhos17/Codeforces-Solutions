
/*
 * Problem: 1602C Array-Elimination
 * Author: Harold-Finch
 * Date: Monday, October 25, 2021 12:15 PM
 * Status: Accepted, 124 ms, 2048000 bytes
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
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define B() begin()
#define E() end()
#define F first
#define S second

void printDivisors(int n)
{
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            // check if divisors are equal
            if (n / i == i)
                printf("%d ", i);
            else {
                printf("%d ", i);
 
                // push the second divisor in the vector
                v.push_back(n / i);
            }
        }
    }
 
    // The vector will be printed in reverse
    for (int i = v.size() - 1; i >= 0; i--)
        printf("%d ", v[i]);
}

int solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto= x : a) cin >> x;

	int cnt[30] = {0};
	FOR(i,0,n) {
		auto s = bitset<30>(a[i]).to_string();
		FOR(j,0,30) cnt[j] += (s[j] - '0');
	}

	int gcd = cnt[0];
	FOR(i,1,30) gcd = __gcd(gcd, cnt[i]);

	if(!gcd) {
		FOR(i,0,n) {
			cout << i+1 << " ";
		}
		cout << endl;
		return 0;
	}

	set<int> div;
    for (int i = 1; i <= sqrt(gcd); i++) {
        if(gcd % i == 0) {
            if (gcd / i == i)
                div.ins(i);
            else {
            	div.ins(i);
            	div.ins(gcd / i);
            }
        }
    }

	for(auto x : div) cout << x << " ";
	cout << endl;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	int t=1;
	cin >> t;
	while(t--)
		solve();
	
	return 0; 
}