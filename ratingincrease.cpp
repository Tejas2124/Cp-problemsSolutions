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
    string s,temp,a = "",b;
    char f = '0';
    int t,n,j,k,m,x,y;
    cin >> s;
    x = s.length();
    for (int i = 0; i < x/2; i++)
    {
        a+=s[i];
        b = s.substr(i + 1,x-(i+1));
        if(b[0] == '0') continue;
        else{
        if(stoi(a)<stoi(b)){
                f = '1'; 
                cout<<a<<" "<<b;
              break;}}   
    }
    if(f == '0')
        cout<<-1;
    cout<<endl;
        
    }
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}
return 0;}