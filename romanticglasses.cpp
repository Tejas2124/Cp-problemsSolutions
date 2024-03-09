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
    long long int n;
    cin >> n;
   long long  int t = 0;
    vector<int>sum;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   for (int  j = 1; j <= n; j++)
   {
        if( j %2 != 0 ) {t = t + a[j-1];sum.push_back(t);}
        if(j  % 2 == 0) t = t - a[j-1];sum.push_back(t);
   }
   int f =0;
  for (int i = 0; i < sum.size(); i++)
   {
     if(sum[i] == 0)f = 1;     
   }
  for (int i = 0; i < sum.size(); i++)
   {
    for (int j = 0; j < n; j++)
    { if(i != j && sum[i] == sum[j]){
f = 1;
    }    
    } 
   }
   
   

   if(f==1)cout<<"YES"<<endl;
   if(f==0)cout<<"No"<<endl;
 
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