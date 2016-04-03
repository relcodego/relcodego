#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main(){
    vector<string> str;
    string substr;
    while(cin>>substr)
        str.push_back(substr);
    for(auto a: str)
    {
        for(auto c : a)
            {
                char ch =toupper(c);
                cout<<ch;
            }
        cout<<endl;
    }
    
    return 0;
}

