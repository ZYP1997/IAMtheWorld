#ifndef H_TIME
#define H_TIME

#include <string>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time();
    ~Time();

    string getTime();
};




#endif