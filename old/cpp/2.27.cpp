#include <iostream>
using namespace std;

int main(){
    int i=1;
    int &r=i;
    cout << r<<endl;
    i=2;
    cout <<r<<endl;
    r=3;
    cout<<r<<endl;
    cout<<i<<endl;
    const int &m = i;
    i=4;
    cout << m<<endl;
    i=5;
    cout<<m<<endl;


    return 0;
}
