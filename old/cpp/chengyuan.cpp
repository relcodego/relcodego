
class Time
{
    public:
        int hour;
        int minute;
};
Time t,*p;
p = &t;
/////////////////////////
p->hour
(*p).hour
t.hour
/////////////////////////

Time &t2 = t;

/////////////////////////


