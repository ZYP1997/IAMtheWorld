#include <iostream>
#include "Object/include/Object.h"
#include "Time/include/Timer.h"
#include "Storage/include/DataPool.h"

using namespace std;

int main()
{
    Timer timer;
    timer.Display();

    DataPool *dataPool = DataPool::getInstance();
    cout << dataPool << endl;
    dataPool = DataPool::getInstance();
    cout << dataPool << endl;
    //system("pause");
    return 0;
}