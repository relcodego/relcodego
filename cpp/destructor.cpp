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
int main(){
    cout <<"dsfa" << endl;
    Student student(3);
    student.couttt();
    Student *stu = new Student(4) ;

    delete stu ;
    //delete student;

    return 0;
}
