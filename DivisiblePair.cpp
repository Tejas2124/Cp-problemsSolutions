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
    int n;
    long long int x,y;
    cin>>n>>x>>y;
    int count = 0;
    
    vector<long long int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            if( k < j)
        {
       long long int m = (arr[k] + arr[j]) % x ;
       long long int n = (arr[k] - arr[j]) % y ;
            if(  m == 0 && n == 0){
                count++;
            }
         }
        }
        
    }

    cout<<count<<endl;
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