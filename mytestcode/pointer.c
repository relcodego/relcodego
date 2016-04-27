
#include <stdio.h>

int main()
{
    int a=0;
    int *p=&a;
    printf("%d,%d",*p,p);
    printf("%d",&a);
    return 0;
}
