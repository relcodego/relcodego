#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using std::vector;
int main(){
    vector<int> a;
    if(a.empty())
        cout<<"empty"<<endl;
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    cout<<"a[1]"<<a[1]<<endl;
       cout<<a.size()<<endl;

    vector<int> v={1,2,3,4,5,6};


    return 0;
}
