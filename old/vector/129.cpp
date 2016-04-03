#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v;
    v={23,342,3};
    for(int a : v)
        cout<<a<<endl;
    v={1,2,3,4,5};
    for(auto a : v)
        cout<< a <<endl;
    return 0;
}
