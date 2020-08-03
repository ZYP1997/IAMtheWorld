#ifndef H_TIMER
#define H_TIMER

#include "Time/include/Time.h"
#include "Object/include/Object.h"

class Timer : public Time, public Object
{
private:
    
public:
    Timer();
    ~Timer();

    void Display();
};




#endif