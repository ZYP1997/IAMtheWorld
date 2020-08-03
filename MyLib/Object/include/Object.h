#ifndef H_OBJECT
#define H_OBJECT

#include <string>
#include <vector>

using namespace std;

class Object
{
private:
    string name;

public:
    Object();
    ~Object();

    string getName();
};

#endif