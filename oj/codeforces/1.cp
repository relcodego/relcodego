#include <stdio.h>

int main()
{
    int n,m,i,k,h;
    
    scanf("%d%d\n",&n,&m);
    int arr[m];
    memset(arr,0,sizeof(arr));
    while(n>0)
    {
        scanf("%d\n",&k);
        int s=0;
        for(i=0;i<k;i++)
        {
            scanf("%d",&h);
            arr[h-1]=1;
        }
        n--;
    }
    
    for(i=0;i<m;i++)
        if(arr[i]==0)
        {
            n = -1;
            printf("YES\n");
        }
    if(n==-1)
        printf("NO\n");

    return 0;
}
