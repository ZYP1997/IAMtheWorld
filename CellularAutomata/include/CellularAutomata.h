#ifndef H_CA
#define H_CA

#include <vector>
#include <random>
#include <iostream>
#include <windows.h>
#include "Time/include/Time.h"

using namespace std;

class Cell
{
private:
public:
    Cell();
    ~Cell();
};

class Box
{
private:
public:
    Box();
    ~Box();
    Cell *cell;
};
class CellularAutomata
{
private:
    int x = 40;
    int y = 12;
    int size;
    int oriCell = 5;
    vector<Box*> cellMap;

public:
    CellularAutomata();
    ~CellularAutomata();
    
    void start();
    void stop();
    void show();
    void act();
};

#endif