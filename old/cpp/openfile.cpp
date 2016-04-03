
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[10];
    ofstream outfile("fl.dat",ios::out);
    for(int i=0;i<10;i++){
        cin>>a[i];
        outfile<<a[i]<<" ";
    }
    outfile.close();
    return 0;
}
