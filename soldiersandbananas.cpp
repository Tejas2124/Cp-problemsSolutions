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
    int n,k,w,sum = 0;
    cin>>k>>n>>w;
 for (int i = 1; i <=w ; i++){sum = sum + i*k;}
 if(sum < n)cout<<0;
 else cout<<sum - n;
}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

 for(int i = 0;i<1;i++){
solve();
}}