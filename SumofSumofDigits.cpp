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
const int MAX = 20000007;
int res[MAX];
int S(int x){
    int res = 0;
    while (x)
    {
        res+=x%10;
        x/=10;
    }
    return res;
    
}
void solve(){
    int x;
    cin>>x;
    cout<<res[x]<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

res[0] = 0;
for (int i = 1; i <= MAX ; i++)
{
    res[i] = res[i-1] + S(i);
}
 
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}