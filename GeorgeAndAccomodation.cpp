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
int main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,p,q;
int count = 0;
cin>>n;
 for(int i = 0;i<n;i++){
    cin>>p>>q;
    if (q-p >= 2) count++;
}
    cout<<count<<endl;
}