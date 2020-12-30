#include "Time/include/Timer.h"
#include <iostream>

Timer::Timer() : Time(time(0))
{
    setName("Timer");
}

Timer::Timer(string str) : Time(time(0))
{
    setName(str);
}

Timer::~Timer()
{

}

void Timer::Display()
{
    cout << getName() << ": ";
    cout << getTime() << endl;
}
