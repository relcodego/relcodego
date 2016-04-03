#include <bits/stdc++.h>
using namespace std;

#define nn 1000000
int main(){

    int n,m;
    int x,p,l,r;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>l>>r>>x;
        int k=0;
        for(p=r;p>=l;p--)
             if(a[p]!=x)
                 cout<<p<<endl;
        
    }
    return 0;
}
