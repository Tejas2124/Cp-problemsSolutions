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
    vector<int>a;
    int t;
    for (size_t i = 0; i < 3; i++)
    {
        cin>>t;
        a.push_back(t);
    }
    
    sort(a.begin(),a.end()); 
    int x =  a.back();
    if (x == 0) {cout<<"YES"<<endl;}
    else{
    if (x == a[0] + a[1] )cout<<"YES"<<endl;
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