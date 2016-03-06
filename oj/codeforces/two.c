#include <stdio.h>
#include <string.h>
int main(){
const long long M =1000000;
 char a[M],b[M];
 scanf("%s",a);
 scanf("%s",b);
 long long i,lena,lenb,len1=0,len2=0 ;
lena = strlen(a);
lenb = strlen(b);
 for(i = 0; i<lena;i++){
    if(a[i]=='0')
        len1++;
    else 
        break;
 }
 
 for(i=0;i<lenb;i++)
 {    if(b[i]=='0') len2++ ;
     else
         break ;
 }
 if((lena-len1)>(lenb-len2))
     printf(">\n");
 else if((lena-len1)<(lenb-len2))
     printf("<\n");
 else
     for(i=0;i<=(lena-len1);i++)
     {
        if(i==(lena-len1))
                {
                  printf("=\n");break;}
        if(a[len1+i]>b[len2+i])  
        {printf(">\n");break;}
        else if(a[len1+i]<b[len2+i])  
        {printf("<\n");break;}
     }
     return 0;
}
