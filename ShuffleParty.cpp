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
    int k=0 ;
    bitset<32> decimalBitset(n);
    string s = decimalBitset.to_string();
    for (size_t i = 0; i < 32; i++)
    {
        if( s[i] == '1'){ k = i;break;}
    }
   //cout<<s<<endl;
    int x = 31-k;
    long long int ans = pow(2,x);

    cout<<ans<<endl;
     
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