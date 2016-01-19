#include <stdio.h>
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p)[4] ;
    p =a;
    printf("%d %d\n",**p,**(p+1));
    printf("hang%d %d\n",**a,**(a+1));
    printf("lie%d %d\n",**a,**(a+1));
    printf("%d %d\n",a[0],**(a+1));
    printf("%d %d",a,(a+1));
    return 0;

}
