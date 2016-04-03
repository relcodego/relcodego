#include <stdio.h>

#define one 2.54

int main(void)
{
    float height , result ;
    int change;
    printf("shu ru ge shi\n ");
    scanf("%d",&change);
    if(change == 0)
    {
        printf("yincun\n");
        scanf("%f",&height);
        printf(" result is %f \n",height*one);

    }
    else
    {
        printf("limi\n");
        scanf("%f",&height);
        printf("result is %f \n",height/one);
    }
    return 0;
}
