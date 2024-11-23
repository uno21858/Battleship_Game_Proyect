// Juego grafico de battleship grafico usando raylib

// Librerias necesarias

#include <raylib.h>
#include "naves.hpp"

// TAma;o del grid
const int rows = 10;
const int cols = 10;
const int cellSize = 130;

void DrawGameGrid(int offsetX, int offsetY) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            // Posición de la celda
            int x = offsetX + col * cellSize;
            int y = offsetY + row * cellSize;

            // Dibujar los detalles de la celda
            DrawRectangleLines(x - 2, y - 2, cellSize + 4, cellSize + 4, DARKGRAY); // Detalle más oscuro
            DrawRectangleLines(x - 1, y - 1, cellSize + 2, cellSize + 2, GRAY);     // Detalle gris intermedio
            DrawRectangleLines(x, y, cellSize, cellSize, LIGHTGRAY);                // Detalle principal
        }
    }
}


int main()
{
    // Inicializar la ventana
    const int screenWidth = 1300;
    const int screenHeight = 1400;
    SetTargetFPS(60);
    InitWindow(screenWidth, screenHeight, "Battleship");
    SetWindowIcon(LoadImage("../Graphics/icon.png"));  // No funciona



    Naves nave1(3, {100, 100});
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        // Draw
        BeginDrawing();

        ClearBackground(DARKBLUE);

        //DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        DrawGameGrid(0, 97);
        nave1.Draw();
        EndDrawing();
    }


    // De-Initialization
    CloseWindow();        // Close window and OpenGL context


    return 0;
}

