#include "Basic.h"

using namespace std;
using namespace basic;

int main()
{

#ifdef ZYP
    cout << "Hello World! ZYP!" << endl;
#else
#ifdef OTHERS
    cout << "Hello! Who are You?" << endl;
#endif
#endif

    BasicInfo basicInfo;
    basicInfo.printTime(Time::YYYYMMDDHHMMSS);

    return 0;
}