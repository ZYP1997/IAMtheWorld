#include "Time/include/Timer.h"
#include <iostream>

Timer::Timer()
{

}

Timer::~Timer()
{

}

void Timer::Display()
{
    std::cout << getName() << endl;
    std::cout << getTime() << endl;
}