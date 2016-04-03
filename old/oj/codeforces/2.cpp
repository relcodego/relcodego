#include <bits/stdc++.h>

using namespace std;
#define ll long long 

ll ci(ll x ,ll y){
     

}

int func(char *str,char *substr){
    int count=0;
    char *cur=substr;
    while(*str!='\0'){
        if(*str==*cur){
            while(*cur!='\0'){
                if(*cur++=*str++)
                    continue;
                else 
                   break;
            }
    if(*cur=='\0')
        count++;
    cur = substr;
        }
      else
        str++;
    }
   return count;
}

int main(){
    char str,substr;
    cin >> str >> substr ;
    int i;
    i=func(&str,&substr);
    cout << i << endl;

    
    
    
    
   

    






   return 0;
}
