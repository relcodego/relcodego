#include <iostream>

using namespace std;

class Student
{
    public:
        int a ;
    void output()
    {
        cout << "enter \n";
        cin >> a ;
        if(a==0)cout << a <<"\n";

    }
};


int main()
{
    Student student ;
    student.output();
    cout << "Hello World!" << endl;
    return 0;
}
