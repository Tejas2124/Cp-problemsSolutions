#include<iostream>
using namespace std;
int main()
{  int a,b,i=0;
    cin>>a>>b;
    while (true)
    {
        a = a*3;
        b = b*2;
        i++;
        if(a>b){cout<<i;break;}
        else{continue;}
    }
    return 0;
}
