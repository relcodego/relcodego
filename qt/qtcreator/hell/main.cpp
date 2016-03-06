#include <iostream>

using namespace std;


class Tm{
public:

    Tm(){ a=0;} int a;
    void aa(){
    cout << a << endl;
    }

};

int main(){

    cout << "hello world\n";
    Tm tm ;
    tm.aa();


    return 0;
}
