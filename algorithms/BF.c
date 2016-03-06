#include <stdio.h>
#define maxsize 100

typedef struct {
    char data[maxsize];
    int length;
}sstring;

int Index(sstring s,sstring t,int pos){
    int  i = pos;
    int  j = 1;
    while(i<s.length && j << t.length){
    if(s[i]==t[j])
    {
        i++;
        j++;
    }


    }


}

int main(){
    


    return 0;
}
