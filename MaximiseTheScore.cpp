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
void solve(){
    int k;cin>>k;
    vector<long long>v,v1,v2;
    int x= 0;
    v.push_back(x);
    for (size_t i = 1; i <= (2*k); i++){long long temp = 0;cin>>temp;v.push_back(temp);}
    
    sort(v.begin(),v.end());
    long long  sum = 0;
    for (size_t i = 1; i <= k; i++)
    {
        sum+=(min(v[2*i - 1],v[2*i]));
    }
    // for (size_t i = 1; i < k; i++)
    // {
    //     sum+= v1[i];
    // }
    cout<<sum<<endl;

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