#include "raylib.h"

#pragma comment(lib, "raylib.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")

int main()
{
    int WindowSizeX = 1000;
    int WindowSizeY = 1000;

    InitWindow(WindowSizeX, WindowSizeY, "b01dc0de / InputVisualizer");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}