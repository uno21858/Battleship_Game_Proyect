//
// Created by elmer on 11/22/2024.
//
#include "raylib.h"

int main()
{
    // Inicializar la ventana
    const int screenWidth = 1300;
    const int screenHeight = 1400;
    SetTargetFPS(60);
    Texture2D background = LoadTexture("Graphics/menu.jpg");
    InitWindow(screenWidth, screenHeight, "Battleship menu");

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        // Draw
        BeginDrawing();

        ClearBackground(DARKBLUE);

        //DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }


    // De-Initialization
    CloseWindow();        // Close window and OpenGL context


    return 0;
}
