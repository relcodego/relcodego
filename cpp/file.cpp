#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int a[10];
    ofstream outfile("f.dat",ios::out);
    if(!outfile){
        cerr<<"erro"<<endl;
    }
    cout<<"enter"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        outfile<<a[i]<<" ";
    }
    outfile.close();


    return 0;
}
