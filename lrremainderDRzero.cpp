#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5,mod =6;
int n,m,p;
int a[N];
struct Node{
    int l,r;
    long v;
}tr[N*4];
void pushup(int u){
    tr[u].v=(tr[u<<1].v*tr[u<<1|1].v)%m;
}
void build(int u,int l, int r){
    tr[u]={l,r};
    if(l==r) {
        tr[u]={l,r,a[r]};
        return;
    }
    int mid=l+r>>1;
    build(u<<1,l,mid),build(u<<1|1,mid+1,r);
    pushup(u);
}
int query(int u,int l,int r){
    if(tr[u].l>=l &&tr[u].r<=r) return tr[u].v;
    int mid = tr[u].l + tr[u].r>>1;
    long v=1;
    if(l<=mid) v=query(u<<1,l,r);
    if(r>mid) v=(v*query(u<<1|1,l,r))%m;
    return v;
}
int main(){
    int t;
    cin>>t;
    while(t--){
         cin>>n>>m;
        for(int i=1;i<=n;i++){
           cin>>a[i];
        }
        long long l=1,r=n;
        build(1,1,n);
        string s;
        cin>>s;
        cout<<query(1,1,n)%m<<" ";
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='L'){
                l++;
                cout<<query(1,l,r)%m<<" ";
            }
            else{
                r--;
                cout<<query(1,l,r)%m<<" ";
            }
        }
        cout<<endl;
    }
}