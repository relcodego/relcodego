#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<7> b(0xbeef) ;
    string str="123456";
    cout<< str[2]<<endl;
    cout<< b.count() << endl;
    b.flip();
    cout<<b<<endl;
    b.reset();
    cout<<b<<endl;
    b.set();
    cout<< b<<endl;

    return 0;
}

