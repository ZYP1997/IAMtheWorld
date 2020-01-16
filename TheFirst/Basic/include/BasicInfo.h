#ifndef _BASICINFO_H_
#define _BASICINFO_H_

#include "Time.h"

namespace basic {

class BasicInfo : public Time {

private:
    /* data */
    Time time;

public:
    BasicInfo(/* args */);
    ~BasicInfo();
};

}

#endif