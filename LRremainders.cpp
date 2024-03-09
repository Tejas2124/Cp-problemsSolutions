#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_set>
#define ll long long int
using namespace std;


void solve(){
    int n;
    ll m,x;
    
    cin>>n>>m;
    string s;
    char temp;
    deque<ll>d;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>x;d.push_back(x);}
    for(int i=0;i<n;i++) {cin>>temp;s.push_back(temp);}

    for (size_t i = 0; i < n; i++)
    {
        ll mult = 1;

        for (size_t j = 0; j < d.size(); j++)
        {
            mult = mult * d[j];   
        }
        ll res =  mult % m;
            cout<<res<<endl;
        if(s[i]  == 'L'){
            d.pop_front();
        }
        else if(s[i]  == 'R'){
            d.pop_back();
        }   

        
    }

}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}