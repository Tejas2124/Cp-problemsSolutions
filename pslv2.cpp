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
    map<int,int>x;
    int  count = 0;
    for (size_t i = 0; i< s.size(); i++)
    {
            x[s[i]]++;
    }
    map<int,int>:: iterator it1 = x.begin();
     while (it1 != x.end() && it1->first != 'A') {
        if ((it1->first) - (int)'A' <= it1 ->second ) {
            count++;
            cout<<it1->first<<" "<<count<<endl;
        }
        it1++;
    }
    std::cout<<count<<endl;
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