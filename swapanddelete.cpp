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
    string s;
    int a = 0,b = 0,c;
    cin>>s;
    if(s.size()  == 1)cout<<1<<endl;
        else{
        for(int  i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')a++;
            if(s[i] == '1')b++;    
        }
        
        c=abs(a-b);
        cout<<s.size() - c<<endl;
        }
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