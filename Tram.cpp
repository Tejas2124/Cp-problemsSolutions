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
int a,b,inside = 0;
    int n;
    cin>>n;
    vector<int>max;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a>>b;
        inside = inside - a + b;
        max.push_back(inside);
    }
    sort(max.begin(),max.end());
    cout<<max.back()<<endl;
}