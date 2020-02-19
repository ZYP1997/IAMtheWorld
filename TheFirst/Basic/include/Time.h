#ifndef _TIME_H_
#define _TIME_H_

namespace basic {

class Time {

private:
    short year;
    short month;
    short day;
    short hour;
    short minute;
    short second;

public:
    enum Type {
        YYYYMMDD,
        YYYYMMDDHHMMSS,
        HHMMSS,
        HHMMSSYYYYMMDD
    };
    Time();
    ~Time();
    void printTime();
    void printTime(Type);
    void printYYYYMMDD();
    void printHHMMSS();
};

}

#endif