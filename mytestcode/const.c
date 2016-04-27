
#include <stdio.h>

int main()
{
    int a0=1,b0=2,c0=3;
    int *a,*b,*c;
    a=&a0;
    b=&b0;
    c=&c0;
    int const *p;
    int * const pp=b;
    
    p=a;
    /*
    printf("p=%d,pp=%d\n",*p,*pp);
    p=c;
    printf("p=%d,pp=%d\n",*p,*pp);
    c=&b0;
    b=&c0; 
    printf("p=%d,pp=%d\n",*p,*pp); */

    b=&c0;
    *pp=1221;
    printf("%d,%d",*b,b0);
    printf("p=%d,pp=%d\n",*p,*pp);
    return 0;
}
