#include <iostream>
using namespace std;
int main(){
    int a;
    unsigned int b;
    cin>>a>>b;
    cout<<a<<":"<<b<<endl;
    b=a;
    cout<<b<<endl;
    cout << sizeof(b)<<endl;
    return 0;
}
