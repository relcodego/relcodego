#include <iostream>
#include <random>

using namespace std;

int main(){
    default_random_engine e ;
    for(size_t i=0;i<10;i++)
        cout << e() << " ";
    cout<<e.max()<<endl;
    cout << e.min()<< endl;

    return 0;
}
