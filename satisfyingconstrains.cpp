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
void solve() {
   long long upper = INT_MAX,lower = INT_MIN,point,t,y;
   int a,b,c,x,i,j,m,count=0;
   vector<int> vec;
   cin>>m;
   for ( i = 0; i < m; i++)
   {
     cin>>x>>t;
     if(x == 1 )lower=max(lower,t);
     if(x == 2 ) upper=min(upper,t);
     if(x == 3){ vec.push_back(t);}
   }
   if(lower>upper){
        cout<<"0\n"; return;
    }

   // cout<<lower<<" "<<upper<<endl;
    sort(vec.begin(),vec.end());
  for ( j = 0; j < vec.size(); j++)
    {
        if (vec[j] <= upper && vec[j]>=lower)
        {
            count++;
        }
        
    }
    cout<<upper-lower-count+1<<endl;

}
int main()
{
    int n, i, j, k, l;
    cin>>n;
    for ( i =0;i<n;i++) {solve();}
}