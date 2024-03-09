#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,t,n;
    int zeros,negative;
   
    cin>>t;
    while (t--)
    {
        zeros = 0;
        negative = 0;
        cin>>n;
        int arry[n];
        for ( i = 0; i < n; i++)
        {
            cin >>arry[i] ;
            if(arry[i]<0)negative+=1;
            else if(arry[i]==0)zeros++;
        }
        //cout<<"neg: "<<negative<<endl;
        if(zeros!=0)cout<<"0"<<endl;
        else if(negative%2==0){
                cout<<"1"<<endl;
                cout<<"1"<<" "<<"0"<<endl;}
        else cout<<"0"<<endl;
    }
    return 0;
}
