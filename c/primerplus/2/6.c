#include <stdio.h>

void smile()
{

    printf("Smile!");

}

int main(void)
{

    for(int j = 0 ;j<3;j++)
    {
        for(int i=j;i<3;i++)
        {
             smile();
        }
        printf("\n");
    }
    return 0;

}
