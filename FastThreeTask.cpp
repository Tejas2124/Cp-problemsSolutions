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
    int n;
    cin>>n;
    vector<ll> v,s;
    ll sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        int temp ;
        cin>>temp;
        sum+= temp;
        if(sum % 3 == 0) s.push_back(0);
        else s.push_back(1);
        v.push_back(temp);
    }
    if( sum+1 % 3 == 0) cout<<1<<endl;
    else{

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