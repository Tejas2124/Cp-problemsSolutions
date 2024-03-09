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
    char arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int coin = 0;
    for (size_t i = 0; i < n-1; i++)
    {   
        if(arr[i+1] == '@')coin++;
        if(arr[i] == '*' && arr[i+1] == '*')break;
    }

    cout<<coin<<endl;
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