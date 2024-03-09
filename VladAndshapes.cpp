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
    int n ;
    cin>>n;
    int count = 0;
    vector<char>v;
    char arr[n][n];

    int k = 0;
    for (size_t i = 0; i < n; i++)
    {
         for (size_t j = 0; j < n; j++)
         {
            cin>>arr[i][j];
            if( arr[i][j] == '1')  k = i;
         }
    }
     int c1 = 0;
    int c2 = 0;

    for (size_t i = 0; i < n; i++)
    {
        if(arr[k][i] == '1') c1++;
        if(arr[k-1][i] == '1') c2++;
    }
  //  cout<<c1<<" "<<c2<<endl;
    if( c1 == c2) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;

    
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