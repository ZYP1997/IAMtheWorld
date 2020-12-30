#ifndef H_TIME
#define H_TIME

#include <string>
#include <ctime>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
    int year;
    int month;
    int day;

public:
    Time();
    Time(time_t);
    ~Time();

    string getTime();
};




#endif