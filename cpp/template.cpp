#include <iostream>
using namespace std;

template < typename T >
T add ( T a, T b ){

    return a+b ;
}


int main(){
    int a;
    double b ;
    a=add (2,5);
    b=add(2.3,4.3);
    cout << a <<endl<< b << endl;



    return 0;
}
