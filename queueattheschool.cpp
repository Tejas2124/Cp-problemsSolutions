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
    int n,a,b,c;
    cin>>a>>n;
    cin >> s;

for (int j = 0; j < n; j++)
{
    for (int i = 0; i < s.length(); i++){
        if(s[i] =='B'&& s[i+1] =='G'){
            int temp;
            temp = s[i];
            s[i] = s[i+1];
            s[i + 1] = temp;
            i++;
        }

    }
}
cout<<s;    

}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 for(int i = 0;i<1;i++){
solve();
}}