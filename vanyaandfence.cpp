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
    int width = 0,n,h;
    vector<int> a;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if (temp > h )
        {
            width=width+2;
        }
        else width++;   
    }
    cout<<width;
    
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 for(int i = 0;i<1;i++){
solve();
}}