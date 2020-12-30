#ifndef H_DATAPOOL
#define H_DATAPOOL

#include <fstream>
#include <iostream>
#include "Time/include/Timer.h"

using namespace std;

class DataPool
{
private:
    class DataGC
    {
    public:
        ~DataGC();
    };

    DataPool();
    static DataPool *dataPool;
    static DataGC dataGC;

    

public:
    ~DataPool();
    static DataPool *getInstance();

    
};

#endif