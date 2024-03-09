#include<iostream>
#include<cmath>
using namespace std;
int main(){
   long long int  n;
    cin>>n;
  long long  int sum = 0;
    if (n%2 == 0) sum = n/2;
    else sum = -(n+1)/2;
    
    cout<<sum<<endl;
}