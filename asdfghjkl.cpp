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
using ll = long long;
using ld = long double;
void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    int cnt = 0;
    multiset<int> v(a.begin(), a.end());
    
    while (!v.empty()) {
        int it = *v.begin();
        bitset<31> bt = it;
        int x = ~it;
        bitset<31> bt2 = x;
        int tp = bt2.to_ullong();
        auto itt = v.find(tp);
        if (itt != v.end()) {
            v.erase(itt);
            v.erase(v.find(it));
        } else {
            v.erase(v.find(it));
        }
        cnt++;
    }
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    for(int t=1; t<=T; t++){
        solve();
    }
    return 0;
}