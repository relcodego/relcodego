#include <iostream>

using namespace std;

class Static{
    public:
        ~Static(){
            cout << "destructor"<<endl;
        }

        int a ;
        static int b;
        
};
int Static::b=89;
int main(){
    Static *sta=new Static;
    sta->a = 4 ;
    cout << sta->a << endl;
   cout << sta->b << endl;     
   delete sta ; 
   cout << sta->b << endl;     
    return 0;
}
