#include "grid.h"
#include <iostream>
// #include <vector>

Grid::Grid()
{
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    Initialize();
    colors = GetCellColors();
};

void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            grid[row][col] = 0;
        }
    }
};
void Grid::Print()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            std::cout << grid[row][col] << "";
        }
        std::cout << std::endl;
    }
};

std::vector<Color> Grid::GetCellColors()
{
    // Define colors with RGBA values
    Color darkGray = {26, 31, 40, 255};  // Dark gray color
    Color green = {47, 230, 23, 255};    // Green color
    Color red = {232, 18, 18, 255};      // Red color
    Color orange = {226, 166, 17, 255};  // Orange color
    Color yellow = {237, 234, 4, 255};   // Yellow color
    Color purple = {166, 0, 247, 255};   // Purple color
    Color cyan = {21, 204, 209, 255};    // Cyan color
    Color blue = {13, 64, 216, 255};     // Blue color

    // Return a vector containing the defined colors
    return {darkGray, green, red, orange, yellow, purple, cyan, blue};
};


void Grid::Draw()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            int cellValue = grid[row][col];
            DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
};