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
    cin>>n;
    int arr[n];
    int temp = 0;int diff = 0;
    int avg = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){cin>>arr[i];avg = avg + arr[i];}
    avg = avg/ n;
    for (size_t i = 0; i < n; i++)
    {
        diff = arr[i] - avg;
        if(diff > 0){temp = temp + diff;}
        else if( diff<= 0) {temp = temp - abs(diff);}
        if( temp < 0) break;
    }
   // cout<<temp<<endl;
    if (temp == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
  
        
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