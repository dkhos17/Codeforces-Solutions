
/*
 * Problem: 1618F Reverse
 * Author: Harold-Finch
 * Date: Friday, December 24, 2021 3:43 PM
 * Status: Accepted, 30 ms, 0 bytes
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
#define YES cout << "YES" << endl 
#define NO cout << "NO" << endl
#define F first
#define S second


string ans(string bx, string by, string base) {
	auto idx = by.find(base);
	if(idx == string::npos) return "NO";

	for(int i = 0; i < idx; i++) {
		if(by[i] == '0') return "NO";
	}

	for(int i = idx+base.size(); i < by.size(); i++) {
		if(by[i] == '0') return "NO";
	}

	return "YES";
}


int main() {
	ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
	
	ll x,y;
	cin >> x >> y;
    if(x == y) return YES, 0;
	string bx = bitset<64>(x).to_string();
	string by = bitset<64>(y).to_string();

	bx = bx.substr(bx.find('1'), 64);
	by = by.substr(by.find('1'), 64);

	// cout << bx << endl;
	// cout << by << endl;

	string b1 = bx.back() == '0' ? bx + '1' : bx;
	string b2 = bx;
	while(b2.back() == '0')
		b2.pop_back();

	string ans1 = ans(bx, by, b1);
	if(ans1 == "YES") return YES, 0;
	
	reverse(b1.B(), b1.E());
	ans1 = ans(bx, by, b1);
	if(ans1 == "YES") return YES, 0;

	string ans2 = ans(bx, by, b2);
	if(ans2 == "YES") return YES, 0;

	reverse(b2.B(), b2.E());
	ans2 = ans(bx, by, b2);
	if(ans2 == "YES") return YES, 0;

	NO;
	return 0; 
}