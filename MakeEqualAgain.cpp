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
using  ll = long long;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n); for (size_t i = 0; i < n; i++)
    {
       cin>>v[i];
    }
    
//    cin>>v;
    ll left=1;
    ll right=1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1])break;
        left++;
    }
    for(int i=n-2;i>=0;i--){
        if(v[i]!=v[i+1])break;
        right++;
    }
    ll sum=0;
    if(v[0]==v[n-1]){
        sum=min(n,left+right);
    }
    else{
        sum=min(n,max(left,right));
    }
    cout<<(n-sum)<<"\n";


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