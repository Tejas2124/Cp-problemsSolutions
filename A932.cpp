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
    int n;cin>>n;int t;
   // cin>>t;
    string s;cin>>s;
    string ans = "";
    long long int k = s.length();
    
    if(s[0] > s[s.length()-1]){
        while (k--)
        {
            ans+=s[k];
        }
        ans+=s;

        cout<<ans<<endl;
    }
    else if(s[0]<=s[s.length()-1]){
        cout<<s<<endl;
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