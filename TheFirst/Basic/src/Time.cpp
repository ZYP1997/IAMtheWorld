#include "Basic.h"

basic::Time::Time(/* args */)
{
    year = 2020;
    month = 1;
    day = 1;
    hour = 0;
    minute = 0;
    second = 0;
}

basic::Time::~Time()
{
}

void basic::Time::printTime()
{
    std::cout << year << "-" << month << "-" << day << " " << hour << ":" << minute << ":" << second << std::endl;
}