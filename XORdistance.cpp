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
    int t;
    unsigned long long int n, m,r; cin >> n >> m>>r;
    vector<unsigned long long int>v;
     while(r>=0)
    {
        unsigned long long int temp = abs((n -m)^r);
        v.push_back(temp);
        r--;
    }
    sort(v.begin(),v.end());
    unsigned long long int x = v.front();
    cout<<x<<endl;

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