#include "raylib.h"
#include "StartMenu.hpp"  // Incluir el encabezado del menú
#include "tablero.hpp"    // Incluir el encabezado del tablero (debes crearlo si no existe)
#include "Player.hpp"     // Asegúrate de incluir la clase Player que maneja las naves
#include "naves.hpp"





int main() {
    // Mostrar el menú principal
    int action = ShowStartMenu();

    if (action == 1) {
        // Si selecciona "Jugar", mostrar el tablero del juego
        // Llamamos a la función donde colocamos las naves
        Player player;
        Tablero board(player);
        // Crear la ventana del juego para colocar las naves
        InitWindow(1300, 1400, "Battleship Game");

        while (!WindowShouldClose()) {
            // Mostrar el tablero y colocar las naves
            board.DrawGameGrid(0, 95);  // Dibujar la cuadrícula en la posición (100, 100)

            /*
            // Actualizar la posición de la nave y manejar rotación
            if (IsKeyPressed(KEY_R)) {
                nave.Rotate();  // Cambia entre 0° y 90° cuando se presiona R
            }
            */


            // Verificar si el jugador hace clic para colocar una nave
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 mousePos = GetMousePosition();
                board.PlaceShip(mousePos, 1, player);  // Coloca una nave tipo 1 (Acorazado)
            }

            // Dibujar las naves en el tablero
            board.DrawShips(player);

            BeginDrawing();
            ClearBackground(DARKBLUE);
            board.DrawGameGrid(0, 95);  // Redibujar la cuadrícula

            // Dibujar las naves
            board.DrawShips(player);

            EndDrawing();
        }

        CloseWindow(); // Cerrar la ventana del juego
    } else if (action == 0) {
        // Si selecciona "Salir", terminar el programa
        CloseWindow();  // Cerrar la ventana del menú
    }

    return 0;
}
