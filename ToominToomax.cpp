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
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<ll>v;
    for (size_t i = 0; i < n; i++)
    {
        ll temp;
        cin>> temp;
        v.push_back(temp);
    }
      sort(v.begin(),v.end());
//     auto it = v.begin();//i
//     auto it1 = v.end();//l
//     auto it2 = it++;//k
//     auto it3 = v.begin()-1;//j
//  cout<<it3<<endl;
    ll i =v[0], j=v[n-2], k = v[1] , l = v[n-1] ;


   ll  ans = 0;
   ans = abs(i - j)+abs(j-k)+abs(k-l) + abs(l-i);
//    cout<<it<<endl;
//    cout<<it1<<endl;
//    cout<<it2<<endl;
//    cout<<it3<<endl;
   cout<<ans<<endl;

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