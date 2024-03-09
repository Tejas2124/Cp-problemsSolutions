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
//#define int long long int;
void solve(){
    int32_t c,d,e,f,j,x,y,i;
    long long int a[4];
    long long int  b[4];
    for ( i = 0; i < 4; i++)
    {   
        cin >> a[i]>>b[i];
    }
    for ( j = 1; j < 4; j++)
    {
        if((a[j]) == (a[0])){
            long long int val = abs(b[0] - b[j]);
            cout<< pow(val,2)<<endl;
        }
    }
    
    
    
}
int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int32_t n;
cin>>n;
 for(int32_t i = 0;i<n;i++){
solve();
}}