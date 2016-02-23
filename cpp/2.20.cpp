#include <iostream>
using namespace std;
int main(){
    int i=3;
    int *p=&i;
    *p=*p**p;
    cout << *p << endl;
    return 0;
}
