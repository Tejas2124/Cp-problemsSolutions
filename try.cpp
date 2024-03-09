#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    int left ;
    
    for (int i = 0; i < n; i++) {
        int temp;
        cin>>v[i];
        //v.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    
}