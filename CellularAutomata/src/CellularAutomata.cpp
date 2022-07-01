#include "CellularAutomata/include/CellularAutomata.h"

CellularAutomata::CellularAutomata()
{
    size = x * y;
    for (int i = 0; i < size; i++)
    {
        cellMap.push_back(new Box());
    }
    srand((unsigned)time(0));
    for (int i = 0; i < oriCell; i++)
    {
        ;
    }
}

CellularAutomata::~CellularAutomata()
{

}

void CellularAutomata::start()
{
    while(1)
    {
        system("cls");
        show();
        act();
        Sleep(500);
    }
    
}

void CellularAutomata::stop()
{

}

void CellularAutomata::show()
{
    
}

void CellularAutomata::act()
{
    
}

Box::Box()
{
    cell = NULL;
}

Box::~Box()
{
    cell = NULL;
}