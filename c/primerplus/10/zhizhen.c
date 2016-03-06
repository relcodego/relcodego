#include <stdio.h>

int main(){

    int a[5]={1,2,3,4,5};
    int * p;
    p =  a;
    printf("a0=%p,a1=%p,a2=%p,a3=%p,a4=%p\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
    printf("p=%p,*p=%d,&p=%p\n",p,*p,&p);
    printf("p=%d,*p=%d,&p=%d\n",p,*p,&p);
    printf("p=%u,*p=%u,&p=%u\n",p,*p,&p);
    return 0;
}


