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
    int t,a = 0,d = 0;
    cin>>t;
    cin>>s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'A')a++;
        if (s[i] == 'D')d++;
    }
    if(a == d)cout<<"Friendship";
    if(a > d)cout<<"Anton";
    if(a < d)cout<<"Danik";
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 for(int i = 0;i<1;i++){
solve();
}}