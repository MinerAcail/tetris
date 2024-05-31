#include <raylib.h>
#include "grid.h"

int main()
{
    // color set for the bg
    Color darkblue = {44, 44, 127, 251};
    Grid grid = Grid();
    // grid.grid[0][0] = 1;
    // grid.grid[3][5] = 3;
    // grid.grid[12][5] = 5;
    // grid.grid[4][23] = 4;
    grid.Print();
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkblue);
        grid.Draw();
        // DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    // return 0;
}