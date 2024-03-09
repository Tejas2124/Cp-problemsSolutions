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
    string s,a,b;
    cin>>s;
    a = s[1];
    for (char i = 'a'; i <'i' ; i++)
    {
        if(s[0] != (char)i){
            cout<<(char)i<<s[1]<<endl;        
            }
    }
    int k = stoi(a);
    for (int i = 1; i <9 ; i++)
    {
        if(k!= i){
            cout<<s[0]<<i<<endl;        
            }
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