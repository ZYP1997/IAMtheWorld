#include "Basic.h"

using namespace std;

int main()
{

#ifdef WINDOWS
    cout << "Hello World! ZYP!" << endl;

#else
    cout << "Hello! Who are You?" << endl;

#endif

    basic::BasicInfo basicInfo;
    basicInfo.printTime();

    return 0;
}