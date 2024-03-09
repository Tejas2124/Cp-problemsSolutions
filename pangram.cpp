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
    string s;
    cin>>s;
    set<char>t;
    for (size_t i = 0; i < n; i++)
    {
        char k = tolower(s[i]);
        t.insert(k);
    }
    
    int k = t.size();

    if( k < 26) cout<<"No"<<endl;
    else cout<<"YES"<<endl;


    
    

}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

 for(int i = 0;i<1;i++){
solve();
}}