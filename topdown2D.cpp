#include "raylib.h"

int main()
{
    // window dimentions
    double windowDimentions[2];
    windowDimentions[0] = 384;
    windowDimentions[1] = 384;
    InitWindow(windowDimentions[0], windowDimentions[1], "TopDown2D by devIcelatte");

    // level map
    Texture2D map = LoadTexture("nature_tileset/OpenWorldMap24x24.png");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        Vector2 mapPos {0,0};
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);
    
        EndDrawing();
    }
    UnloadTexture(map);
    CloseWindow();
}