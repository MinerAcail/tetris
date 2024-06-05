#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block
{
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffSet;
    int columnOffSet;

public:
    Block();
    void Draw();
    void Move(int row, int column);

    int id;

    // so the cells is the varable given to the map which take int as key and vector is an array
    std::map<int, std::vector<Position>> cells;
    std::vector<Position> GetCellPositions();
};
