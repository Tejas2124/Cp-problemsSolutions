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
    string a = "I hate that ",b = "I love that ",ans = "";
        for (int i = 1; i <= n; i++)
        {
            if(i % 2 != 0) ans+=a;
            else ans+=b;
        }
        //cout<<ans<<endl;
       string t= ans.substr(0, ans.size()-5);
       cout<<t +"it"<<endl; 
       // cout<<ans.length()<<endl;
        
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
std :: cout.tie(0);


 for(int i = 0;i<1;i++){
solve();
}}