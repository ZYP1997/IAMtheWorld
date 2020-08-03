#include "Time/include/Time.h"

Time::Time()
{
    hour = 12;
    minute = 0;
    second = 0;
}

Time::~Time()
{

}

string Time::getTime()
{
    char buf[10];
    sprintf(buf, "%d:%d:%d", hour, minute, second);
    return buf;
}
