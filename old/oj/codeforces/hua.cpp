#include <bits/stdc++.h>

using namespace std;





int main(){

    int a ,b;
    int max;
    int t;
    cin >> t;
    int A,B,C;
    char ch;
    for(int i=0;i<t;i++){
        cin>>A>>B>>C;
        int AA[26],BB[26],CC[26];

        for(int j=0;j<A;j++){
            AA[j]=0;
            cin>>ch;
                cin >>AA[ch-65];
        }
        for(int j=0;j<B;j++){
            BB[j]=0;
            cin>>ch;
            cin>>BB[ch-65];
        }
        for(int j=0;j<C;j++){
            CC[j]=0;
            cin>>ch;
            cin>>CC[ch-65];
        }
        max=0;
        int ka,kb;
        for(int j=0;j<26;j++)
             if(max<AA[j])
               ka=j;
        max=0;
        for(int j=0;j<26;j++)
            if(max<BB[j])
                kb=j;
        for(a=1;a<=ka;a++)
        {
            for(b=1;b<=kb;b++)
            {
                for(int j=0,m=0;j<26;j++)
                {
                    if((a*AA[j]+b*BB[j])==CC[j])
                        m++;
                    if(m==25){
                        cout << a << b <<endl;
                    return 0;}
                }
            }
        }
        cout <<"NO"<<endl;
        cout << a << b << endl; 
    }



    return 0;
}
