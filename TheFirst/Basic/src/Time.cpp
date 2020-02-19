#include "Basic.h"

using namespace std;

namespace basic {

Time::Time(/* args */)
{
    year = 2020;
    month = 1;
    day = 1;
    hour = 0;
    minute = 0;
    second = 0;
}

Time::~Time()
{
}

void Time::printTime()
{
    printTime(Type::YYYYMMDDHHMMSS);
}

void Time::printTime(Time::Type type)
{
    switch (type) {
    case Type::YYYYMMDD: {
        printYYYYMMDD();
        cout << endl;
        break;
    }
    case Type::HHMMSS: {
        printHHMMSS();
        cout << endl;
        break;
    }
    case Type::YYYYMMDDHHMMSS: {
        printYYYYMMDD();
        cout << " ";
        printHHMMSS();
        cout << endl;
        break;
    }
    case Type::HHMMSSYYYYMMDD: {
        printHHMMSS();
        cout << " ";
        printYYYYMMDD();
        cout << endl;
        break;
    }

    default:
        break;
    }
}

void Time::printYYYYMMDD()
{
    cout << year << "-";
    if (month < 10) {
        cout << "0";
    }
    cout << month << "-";
    if (day < 10) {
        cout << "0";
    }
    cout << day;
}

void Time::printHHMMSS()
{
    if (hour < 10) {
        cout << "0";
    }
    cout << hour << ":";
    if (minute < 10) {
        cout << "0";
    }
    cout << minute << ":";
    if (second < 10) {
        cout << "0";
    }
    cout << second;
}

}
