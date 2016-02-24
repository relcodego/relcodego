#include <iostream>
using namespace std;

class A
{
    public:

    int a;
    int add(){ return 2;}
};

class B : virtual public A
{
    public:
        int b ;
};

int main(){

    return 0;
}



