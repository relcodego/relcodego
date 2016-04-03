#include <stdio.h>
#include <string.h>
int main()
{
    int n,m,i,k,h;
    
    scanf("%d %d\n",&n,&m);
    int arr[m];
    memset(arr,0,sizeof(arr));
    while(n>0)
    {
        scanf("%d\n",&k);
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
            n = 200;
            printf("NO\n");
        }
    if(n!=200)
        printf("YES\n");

    return 0;
}
