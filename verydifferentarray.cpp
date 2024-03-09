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
     int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++){cin>>a[i]; }
    for (int i = 0; i < m; i++){cin>>b[i]; }
    long long int sum  = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long int l1 = 0,l2 = 0,r1 = n-1,r2 = m-1;

    while (l1<=r1)
    {
        if(abs(a[l1]-b[r2])>=abs(a[r1] -b[l2])){
            sum+=abs(a[l1]-b[r2]);
            r2--;l1++;
           
        }
        else{
            sum+=abs(a[r1] -b[l2]);
            r1--;l2++;
        }
        
    }
    cout<<sum<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
long long int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}