#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int hh,mm;
    int add,h,m;
    cin >> str ;
    cin >> add ;
    hh=(str[0]-'0')*10+str[1]-'0';
    mm=(str[3]-'0')*10+str[4]-'0';
    cout<<hh<<mm<<endl;
    cout<<str[0]<<str[1]<<str[3]<<str[4]<<endl;
    cout<<(int)str[0]<<endl;
    h=add/60;
    h=h%24;
    m=add%60;
    cout<<h<<m<<endl;
    hh+=h;
    mm+=m;
    if(mm>=60)
    {
        mm-=60;
        hh++;
    }
    if(hh>=24)
        hh-=24;
    str[0]=hh/10+'0';
    str[1]=hh%10+'0';
    str[3]=mm/10+'0';
    str[4]=mm%10+'0';
    cout<<str<<endl;


    return 0;
}

