
/*
 * Problem: 1215B The-Number-of-Products
 * Author: Harold-Finch
 * Date: Sunday, September 15, 2019 3:45 PM
 * Status: Accepted, 92 ms, 819200 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define scanVec(vec , n) for(int i = 0; i < n ; i++){ cin>>vec[i];}
#define printVec(vec , n) for(int i = 0; i < n ; i++){ cout<<vec[i]<<" ";}
#define S second
#define F first
const int  MOD = 1e9 + 7;
const int  N = 1e5 + 7;
 
int main(){
    ios::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
    int n , x; cin>>n;
    vector<int> pref(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        cin>>x;
        pref[i] = pref[i-1];
        if(x < 0) pref[i]++;
    }
    ll even = 1, odd = 0;
    ll even_res = 0 , odd_res = 0;
    for(int i = 1; i <= n ; i++){
        if(pref[i] % 2) {
            even_res += odd;
            odd_res += even;
            odd++;
        }else {
            even_res += even;
            odd_res += odd;
            even++;
        }
    }
    cout<<odd_res<<" "<<even_res<<endl;
 
    return 0;
}