#include <iostream>
#include "Object/include/Object.h"
#include "Time/include/Timer.h"

using namespace std;

int main()
{
    Timer timer;
    timer.Display();

    using INT = int;

    INT a = 8, b = 9;
    const int *p = &a;
    p = &b;
    int* const q = &a;
    *q = 10;

    system("pause");
    return 0;
}