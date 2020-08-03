#include "Factory/Factory.h"

int main()
{
    Factory factory;
    Object *objectA = factory.CreateObject(2);

    system("pause");
    return 0;
}