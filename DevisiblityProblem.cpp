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
#define ll long long int
using namespace std;
void solve(){
    ll a,b;
    cin>>a>>b;

    if( a % b !=0){
        ll temp = 0;
        if(a>b) {temp = a/b; cout<<(temp+1)*b - a <<endl;}
        else {
            //temp = a/b; 
            cout<<b - a<<endl;
        }
    }
    else cout<<0<<endl;


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