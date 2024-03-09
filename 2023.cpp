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
#define int long long int
void solve(){
    int a,b,n,f,t,i,j,x,k,y;
    cin>>b>>k;
    int mult = 1 ;
    for(int i=0;i<b;i++){
        cin>>x;
        mult=mult*x;    
    }
    if(2023 % mult == 0){ 
        cout<<"YES"<<endl;
        y = 2023 / mult; 
        cout<< y<<endl;
        for (int t = 0; t < k-1; t++)
        {
            cout << 1<<endl;
        }
    }
    else cout<<"NO\n";
}
int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}