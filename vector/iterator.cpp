#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int a;
    while(cin>>a)
        v.push_back(a);
    for(int num:v)
        cout<<num<<endl;
        auto num = v.begin();
    return 0;
}
