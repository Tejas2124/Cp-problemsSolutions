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
    int n;cin>>n;
    string s;cin>>s;
    while (n--)
    {
      if(s.back() == 'W')s.pop_back();
    }
    reverse(s.begin(),s.end());
    int t = s.length();
    while (t--)
    {
      if(s.back() == 'W')s.pop_back();
    }
    cout<<s.length()<<endl;

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