//
// Created by elmer on 11/22/2024.
//
#include "raylib.h"
#include <cstdio>
#include <iostream>
#include "button.hpp"

#include <unistd.h> // Para obtener la ruta del archivo ejecutable
int main()
{
    // Busca donde esta el archivo ejecutable
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
        printf("Current working directory: %s\n", cwd);



    // Inicializar la ventana
    const int screenWidth = 1024;
    const int screenHeight = 1024;
    SetTargetFPS(60);
    InitWindow(screenWidth, screenHeight, "Battleship menu");
    SetWindowIcon(LoadImage("../Graphics/icon.png"));  // No funciona

    Texture2D background = LoadTexture("../Graphics/Menu.png"); // Descarga la imagen de fondo

    // Botones
    Button startButton("../Graphics/StartButton.png", { 100, 600}, 0.35);  // Posicion X y Y del boton de inicio, y el tamaño del boton
    Button exitButton("../Graphics/ExitButton.png", { 600, 600}, 0.345);  // Posicion X y Y del boton de inicio, y el tamaño del boton
    bool exit = false;
    // Main game loop
    while (WindowShouldClose() == false && exit == false)    // Detect window close button or ESC key
    {
    // Funciones del mouse press o boton
        // Bottón de inicio
        Vector2 mousePosition = GetMousePosition();
        bool mousePressed = IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
        if (startButton.isPressed(mousePosition, mousePressed)) {
            printf("Start button pressed\n");
        }
        //Botón de salir
        if (exitButton.isPressed(mousePosition, mousePressed)) {
            exit = true;
        }



        // Draw
        BeginDrawing();
        ClearBackground(DARKBLUE);
        // All of q se quiera dibujar va despues de esta linea
        DrawTexture(background, 0, 0, WHITE); // Dibuja el fondo

        startButton.Draw(); // Dibuja el boton de inicio
        exitButton.Draw(); // Dibuja el boton de salida
        EndDrawing();
    }
    // De-Initialization
    CloseWindow();        // Close window and OpenGL context


    return 0;
}





