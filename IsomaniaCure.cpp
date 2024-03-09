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
    int k,l,m,n,d;
    set<int>s;
    cin >> k >> l >> m >> n>>d;
    for (size_t i = 1; i <= d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0||i%n==0) s.insert(i);
    }
    cout<<s.size()<<endl; 
    
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

 for(int i = 0;i<1;i++){
solve();
}}