#include <raylib.h>
#include "grid.h"
#include "imps/blocks.cpp"

int main()
{
    // color set for the bg
    Color darkblue = {44, 44, 127, 251};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);


    Grid grid = Grid();
    IBlock block = IBlock();
    // grid.Print();
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkblue);
        grid.Draw();
        block.Draw();
        // DrawText("Hello World", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    // return 0;
}