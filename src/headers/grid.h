#pragma once
#include <vector>
#include <raylib.h>
class Grid
{
private:
    int numRows;
    int numCols;
    int cellSize;
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10];

    std::vector<Color> colors;
   
};

