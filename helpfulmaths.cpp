#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s, res;
    cin >> s;
    int k = s.length();
    vector<int> v;
    for (int i = 0; i < k; i += 2) {
        int x = s[i] - '0';  // convert char to int
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++) {
        res += to_string(v[j]);
        if (j < v.size() - 1) {
            res += '+';
        }
    }
    cout << res;
    return 0;
}
