#ifndef _TIME_H_
#define _TIME_H_

namespace basic {

class Time {

private:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

public:
    Time(/* args */);
    ~Time();
    void printTime();
};

}

#endif