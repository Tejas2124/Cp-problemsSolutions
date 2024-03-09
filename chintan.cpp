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
using namespace std;
using ll = long long;
using ld = long double;
void solve(){
    ll n; cin>>n;
    ll min1=INT_MIN, max1=INT_MAX;
    vector<ll> v;
    for(int i=0; i<n; i++){
        ll x,y; cin>>x>>y;
        if(x==1) min1=max(min1,y);
        if(x==2) max1=min(max1,y);
        if(x==3) v.push_back(y);
    }
    sort(v.begin(),v.end());
    if(min1>max1){
        cout<<"0\n"; return;
    }
    cout<<min1<<" "<<max1<<endl;
    auto it1=lower_bound(v.begin(),v.end(),min1);
    auto it2=upper_bound(v.begin(),v.end(),max1);
    ll ans=(max1-min1+1-(it2-it1));
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    for(int t=1; t<=T; t++){
        solve();
    }
    return 0;
}