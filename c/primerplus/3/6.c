#include <stdio.h>

#define water 3.0e-23

int main(void)
{
    int num ;
    float result ;
    scanf("%d",&num);
    result = num*950.0/water ;
    printf("%f\n",result);
    printf("%e\n",result);
    
    return 0 ;
}
