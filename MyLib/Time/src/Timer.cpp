#include "Time/include/Timer.h"
#include <iostream>

Timer::Timer()
{
    setName("Timer");
}

Timer::~Timer()
{

}

void Timer::Display()
{
    cout << getName() << endl;
    cout << getTime() << endl;
}