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
    float arr[n];
    float sum = 0;
    for (int i = 0; i <n; i++)
    {
        float k ;
        cin >>k;
        arr[i]=k/100;
        sum+=arr[i];
    }
    cout<<(double)(sum/n)*100<<endl;

}
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 solve();
}