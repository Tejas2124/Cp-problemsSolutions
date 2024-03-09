#include<iostream>
using namespace std;
int main() {
    int n,t=0;
    string s;
    cin>>n;
    cin>>s;
    for (size_t i = 0; i < n; i++)
    {
       if(s[i]==s[i+1]){
        t++;
       } 
       else{
        continue;
       }
    }
   cout<<t;
}