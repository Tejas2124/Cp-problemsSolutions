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
    string a,b;
    cin >> a >> b;
    int x = 0,y = 0;
   
    for (int i = 0; i < n; i++)
    {
        if(a[i] == '1' && b[i] == '0')x++;
        if(a[i] == '0' && b[i] == '1')y++;
    }
    cout<<max(x,y)<<endl;
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