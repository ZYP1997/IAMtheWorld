#include "Time/include/Time.h"

Time::Time()
{
    hour = 12;
    minute = 0;
    second = 0;
    year = 2020;
    month = 7;
    day = 2;
}

Time::Time(time_t t)
{
    tm *ltm = localtime(&t);
    year = 1900 + ltm->tm_year;
    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
    hour = ltm->tm_hour;
    minute = ltm->tm_min;
    second = ltm->tm_sec;
}

Time::~Time()
{

}

string Time::getTime()
{
    char buf[20];
    sprintf(buf, "%d-%.2d-%.2d %.2d:%.2d:%.2d", year, month, day, hour, minute, second);
    return buf;
}
