#include <memory>
#include <vector>
using namespace std;

int main(){
    shared_ptr<int> a=make_shared<int>(32) ;
    shared_ptr<string> str = make_shared<string>(2,'3');
    auto p = make_shared<int> (2);

    int *p1 = new int(2332);
    string *strs = new string(10,'9');
    vector<int> *v = new vector<int> {1,2,3,4};

    int *p2 = new int;
    int *p3 = new int();

    auto pp = new auto(23);
    auto ss = new auto("sfjsla");


    return 0;
}
