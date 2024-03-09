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
    string s = "";
    map<int,char>m;
    for (int i = 1; i <= 26; ++i) {
        m[i] = 'a' + i-1;
    }
  outerLoop:
   for (size_t i = 1; i <= 26; i++)
   {
    for (size_t j = 1; j <= 26; j++)
    {
      for (size_t k = 1; k <=26 ; k++)
      {
        int sum = i + j + k;
        if ( sum == n ){ s.push_back(m[i]);
        s.push_back(m[j]);
        s.push_back( m[k]);
        goto endLoop;
        //goto endlLoop;
        }
        else continue;
        //goto endLoop;
      }
      
    }
    
   }
   endLoop:
   cout<<s<<endl;
   
    
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