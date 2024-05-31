#pragma once
#include <vector>
#include <map>
#include "position.h"

class Bock
{
private:
    int cellSize;
    int rotationState;
public:
    Bock();
    int id;

    // so the cells is the varable given to the map which take int as key and vector is am array
    std::map<int, std::vector<Position>> cells;
};
