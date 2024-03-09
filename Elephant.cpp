#include<iostream>
#include <array>
#include<cmath>
using namespace std;
int main(){
    int number,n,x;
    cin>>n;
    for (int i = 5; i >0; i--)
    {
        if (n % i == 0)
        {
            cout<< n / i;
            break;
        }
        else
         cout<< (n/i) + 1;
         break;        
    }
    
}