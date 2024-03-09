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

int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
     int n;cin>>n;
    string s;
    vector<string>v;
for (int j = 0; j < n; j++)
{
    string k;
    cin >>k;
    s += k;
}
    int count = 0;
for(int i = 0; i <2*n-1; i++)
    {
        int a = int (s[i] - '0');
        int b  = int (s[i+1] - '0');
        if( a + b == 0 || a +b == 2) count++;  
    }
   std::cout<<count+1<<endl;
}