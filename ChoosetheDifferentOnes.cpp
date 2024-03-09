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
typedef long long int ll;
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    set<ll>s1,s2,s3;
    for(int i = 0;i < n;i++) {
        int temp; cin>>temp;
        if(temp <= k ){ a.push_back(temp);s1.insert(temp);}
        else continue;
    }

        for(int i = 0;i < m;i++) {
        int temp; cin>>temp;
        if(temp <= k ){ b.push_back(temp);s2.insert(temp);}
        else continue;
        }

    ll sum = (k*(k +1)) / 2;
    std::set_union(std::begin(s1), std::end(s1),
               std::begin(s2), std::end(s2),                  
               std::inserter(s3, std::begin(s3)));
        
    if(s1.size() < k/2 || s2.size() < k/2  ) cout<<"No"<<endl;
    else {
           // cout<<" s3"<<endl;
            ll x = 0;
            for(auto i:s3) x+=i;
            if( x == sum) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
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