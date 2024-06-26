#include "colors.h"
// Define colors with RGBA values

const Color darkGray = {26, 31, 40, 255}; // Dark gray color
const Color green = {47, 230, 23, 255};   // Green color
const Color red = {232, 18, 18, 255};     // Red color
const Color orange = {226, 166, 17, 255}; // Orange color
const Color yellow = {237, 234, 4, 255};  // Yellow color
const Color purple = {166, 0, 247, 255};  // Purple color
const Color cyan = {21, 204, 209, 255};   // Cyan color
const Color blue = {13, 64, 216, 255};    // Blue color

std::vector<Color> GetCellColors()
{

    // Return a vector containing the defined colors
    return {darkGray, green, red, orange, yellow, purple, cyan, blue};
};
