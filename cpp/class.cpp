#include <iostream>

using namespace std;

class Student {
    public:
        int a;
        int b;
        void display(){cout<<"jsadflj"<<endl;}
};

class Stu : public Student {
    public:
        int c;
        void dis(){cout<< "stu"<<endl;
        }

};
int main()
{
    Student student;
    Stu stu;
    student.display();
    stu.display();
    stu.dis();
    return 0;
}
