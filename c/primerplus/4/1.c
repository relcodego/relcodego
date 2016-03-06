#include <stdio.h>
int main(void)
{
    char name1[10],name2[20];
    printf("please intput your first name\n ");
    scanf("%s",name1);
    printf("please intput your second name\n ");
    scanf("%s",name2);
    printf("your name is \n");
    printf("%s,%s\n",name1,name2);
    return 0;
    
}
