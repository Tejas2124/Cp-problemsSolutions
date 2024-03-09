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
      int i,j,k,l,m,n;
    char a[3][3];
    for (int i = 0; i < 3; ++i)
    {for (j = 0; j < 3; ++j){cin>>a[i][j];
    if(a[i][j] == '?')m = i;}}
    int sum = 6;
    for (k = 0; k < 3; k++)
    {
        if(a[m][k] == 'A')sum = sum -1;
        if(a[m][k] == 'B')sum = sum -2;
        if(a[m][k] == 'C')sum = sum -3;
    }
    if(sum == 1)cout<<'A'<<endl;
    if(sum == 2)cout<<'B'<<endl;
    if(sum == 3)cout<<'C'<<endl;
    }
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
for(int i = 0;i<n;i++){solve();}}