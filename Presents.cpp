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
    int arr[n+1];
    int arr2[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
        int j = i;
        arr2[arr[i]] = j;
    }

    for (int k = 1; k <= n; k++)
    {
        cout<<arr2[k]<<" ";
    }
    
    
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}