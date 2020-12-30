#include <iostream>
#include <windows.h>
#include "Object/include/Object.h"
#include "Time/include/Timer.h"
#include "Storage/include/DataPool.h"

using namespace std;

int main()
{
    Timer timer;
    timer.Display();
    Time t(time(0));
    cout << t.getTime() << endl;


    ofstream outfile("../../data/data1.dat");
    outfile.write((char *)&timer, sizeof(t));
    outfile.close();

    Sleep(2000);
    ifstream infile("../../data/data1.dat");
    Timer t2("T1");
    t2.Display();
    infile.read((char *)&t2, sizeof(t2));
    t2.Display();

    DataPool *dataPool = DataPool::getInstance();
    cout << dataPool << endl;
    dataPool = DataPool::getInstance();
    cout << dataPool << endl;
    //system("pause");
    return 0;
}