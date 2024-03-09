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
    long long int n, m; cin>>n;
    int arr[] = {1,3,6,10,15};
    int i = 4;//arr.length();
    long long int ans = 0;
    while (n-1){
        if(n%arr[i] != 0 && n>=arr[i]){
        ans += n/arr[i];
        n = n % arr[i];
        i--;
        }
        else{
            if( (n % arr[i]) == 0){
            ans += (n/arr[i]);
            n = n % arr[i];
            i--;
            }
            else{ i--;continue;}
        }
    }
    std::cout<<ans<<endl;
    
}
int main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
    std::cout.tie(0);
int n;
cin>>n;
 for(int i = 0;i<n;i++){
solve();
}}