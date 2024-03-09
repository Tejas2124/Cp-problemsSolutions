#include<iostream>
#include<cmath>
#define int long long int
using namespace std;
void solve(){
        int k,d;
        cin>>k;
        int sum = 0;
        int arr[k];
        for (int j = 0; j < k; j++){cin>>arr[j];sum+=arr[j];}
        d = sqrt(sum);
        if(sum == d*d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  i,n,a;
    cin>>n;
    while(n--)
    {   
        solve();
    }
    return 0;
}