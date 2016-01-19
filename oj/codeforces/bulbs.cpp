#include <bits/stdc++.h>

using namespace std ;

int main(void)
{
    int n,m,i=0,ans;
    cin >> n >> m ;
    int arr[m],num[n];
    for (i=0;i<m;i++)
        arr[i]=0;
    for (i = 0;i<n;i++)
    {
        cin >> num[i];
        int shuzu[num[i]];
        for(int j=0;j<num[i];j++)
        {   
            cin >> shuzu[j] ;
            arr[shuzu[j]-1]=1;                       
    
        }
        
    }
    for(i=0;i<m;i++)
    {
        if(arr[i]==0)
        {
            cout << "NO\n";
            ans = 2;
        }
    }
    if(ans!=2)
        cout <<"YES\n";

    return 0;

}
