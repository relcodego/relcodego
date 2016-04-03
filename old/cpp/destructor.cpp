/////////////////////////////////////
//  a::b::c 
//  c :
//  a::a() 
//  b::b()
//  c::c()
//  c::~c()
//  b::~b()
//  a::~a()
//  ////////////////////////





#include <iostream>


using namespace std;

class Student{
    public:
        Student(int d){
            num =0;
            a = 0;
        }
        ~Student(){
            cout << " ~~~~" << endl;
        }
        void couttt(){
            cout << "couttt"<<endl;
        }
    private:
        int num ;
        int a;

};
class Time{
    public:
        Time(){cout << "time"<<endl;
        }
        ~Time(){cout << "xgtime"<<endl;
        }
};
int main(){
    cout <<"dsfa" << endl;
    Student student(3);
    student.couttt();
    Student *stu = new Student(4) ;
    Time time;
    Time *time2 = new Time;
    delete time2;
    delete stu ;
    //delete student;

    return 0;
}
