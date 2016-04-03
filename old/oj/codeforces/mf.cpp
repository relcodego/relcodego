#include <bits/stdc++.h>

using namespace std; 

int main(){
int max=0;
int n;
cin >> n;
int  a[n],b[n];
char c[n];
 
for(int i=0;i<n;i++) 
cin >> c[i] >> a[i] >> b[i] ;
 

int mm[366]={0},ff[366]={0};
 
for(int i=0;i<n;i++)
for(int j=a[i]-1;j<b[i];j++){
if(c[i]=='M')
++mm[j];                            
else 
++ff[j];
 
}

for(int i=0;i<366;i++){
 if(mm[i]>ff[i])
mm[i]=ff[i];
if(max<mm[i])
max=mm[i];
 
} 
cout << max << endl;



return 0;

}   