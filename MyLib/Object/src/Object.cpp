#include "Object/include/Object.h"

Object::Object()
{
    name = "NonObject";
}

Object::~Object()
{
    
}

string Object::getName()
{
    return name;
}