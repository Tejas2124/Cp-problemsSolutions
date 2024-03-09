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
    vector<int>v(n);
    int left,right;
    for (size_t i = 0; i < n; i++)
    {
        //int temp;
        cin>>v[i];
       // v.push_back(temp);
        if (v[i] == 1)  right = i;
    }
   // cout<<"Right : "<<right<<endl;
    for (size_t i = 0; i < n; i++)
    {
        if(v[i] == 1) { left = i;break;}
    }
    int count = 0;
   // cout<<"Left : "<<left<<endl;
    for (size_t i = left; i <= right; i++)
    {
        if(v[i] == 0) count++;
    }
    cout<<count<<endl;

    
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