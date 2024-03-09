#include<iostream>
#include<set>
#include<string>
#include<cmath>
using namespace std;
using ll = long long ;

void solve(){
    string s;
    cin >>s;
    int n=s.size();
    set <char> st;
    for(int i=0;i<n;i++)st.insert(s[i]);
  int  k =  st.size();
   if(k % 2 == 0)cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;
}

int main(int argc, char const *argv[])
 {
    solve();
    return 0;
 }
 