
/*
 * Problem: 1183A Nearest-Interesting-Number
 * Author: Harold-Finch
 * Date: Wednesday, June 26, 2019 6:51 PM
 * Status: Accepted, 31 ms, 0 bytes
 * Language: GNU C++14
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


bool isInteresting(int e){
	int sum = 0;
	while(e){
		sum += e%10;
		e /= 10;
	}
	return sum % 4 == 0;
}

int main() {
	int a,n = 1003;
	cin >> a;
	for(int i = a; i < 4444; i++){
		if(isInteresting(i)){
			n = i;
			break;
		} 
	}
	cout << n << endl;
	return 0; 
}