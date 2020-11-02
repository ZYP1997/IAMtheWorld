#include "Storage/include/DataPool.h"

DataPool *DataPool::dataPool = NULL;
DataPool::DataGC DataPool::dataGC;

DataPool::DataPool()
{
    cout << "Create DataPool" << endl;
}

DataPool::~DataPool()
{
    cout << "Delete DataPool" << endl;
}

DataPool *DataPool::getInstance()
{
    if (dataPool == NULL)
    {
        dataPool = new DataPool();
    }

    return dataPool;
}

DataPool::DataGC::~DataGC()
{
    if (dataPool)
    {
        delete dataPool;
    }
}