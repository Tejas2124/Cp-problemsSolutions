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
    string s1,s2,s3;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if( s1[i] == s2[i]) s3.push_back('0');
        else s3.push_back('1');
    }
    cout<<s3<<endl;
    
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 for(int i = 0;i<1;i++){
solve();
}}