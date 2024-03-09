#include<iostream>
using namespace std;
int main(){
int n;
scanf("%d",&n);
while(n--){
int a,b; 
scanf("%d%d", &a,&b);
int res = abs(a-b);
int sec = res%10;
if(sec)
    printf("%d\n", res/10+1);
else
    printf("%d\n", res/10);
}
return 0;
}