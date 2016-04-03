#include <iostream>
using namespace std;
class Complex{
    public:
        int a,b,c;
        Complex operator + (Complex &);
       Complex(){a=0;} 

};
Complex Complex::operator + (Complex &c){
    Complex d;
    d.a=a+c.a+2;
return d;
}
int main()
{

    int a,b;
    a=3;
    b=4;
    cout << a+b << endl;
Complex c,c2;
cout<<c.a<<endl;
c=c+c2;
cout<<c.a<<endl;


    return  0;
}
