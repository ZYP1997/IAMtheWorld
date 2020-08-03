#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <iostream>

using namespace std;

class Object
{
private:
public:
};

class Object1 : public Object
{
private:
public:
    Object1()
    {
        cout << "Object1" << endl;
    }
};

class Object2 : public Object
{
private:
public:
    Object2()
    {
        cout << "Object2" << endl;
    }
};

class Factory
{
private:
public:
    Object *CreateObject(int type)
    {
        if (type == 1)
            return new Object1();
        else if (type == 2)
            return new Object2();

        return nullptr;
    }
};

#endif