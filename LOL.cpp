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
    int l_count = 0,o_count = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'L')l_count++;
        else o_count++;
    }
    int me_l = 0,me_o = 0;
    for (int j = 0; j < s.length(); j++)
    {
        
         if(s[j] == 'L') me_l++;l_count--;
         if(s[j] == 'O') me_o++;o_count--;

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