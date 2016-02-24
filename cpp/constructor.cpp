#include <iostream>
using namespace std;

class Time{
    public:
        Time(){
            hour=0;
            minute=0;
            sec=0;
        }
        void show_time();
    private:
        int hour;
        int minute;
        int sec;
        
};
void Time::show_time(){
    cout<<hour<<minute<<sec<<endl;

}

class Date{
    public:
        Date();
    private:
        int date;
        
};

Date::Date(){     //初始化

    date=0;
}
/*
   Date::Date():date(0){}  //参数列表初始化方式

   */

int main(){
    

    return 0;
}

