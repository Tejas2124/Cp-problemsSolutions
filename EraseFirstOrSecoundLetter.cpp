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
    int n;cin>>n;
    string s;cin>>s;
    set<string> ans;
    string temp1 = s,temp2 = s;
    while (temp1.length()>0)
    {
        temp1.erase(0);
        ans.insert(temp1);
    }
    while (temp2.length()>0)
    {
        if(temp2.length()>2){temp2.erase(1);ans.insert(temp2);}
        else{
            temp2.erase(1);ans.insert(temp2);
        }
    }
 for (auto it = ans.begin(); it != ans.end(); ++it)
        cout << ' ' << *it<<endl;
    
   
        
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