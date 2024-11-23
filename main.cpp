#include "raylib.h"
#include "StartMenu.hpp"
#include "Tablero.hpp"

enum GameState { MENU, GAME, EXIT }; // Estados posibles del juego

int main() {
    GameState currentState = MENU; // Comenzar en el menú

    while (currentState != EXIT) { // Mantener el programa ejecutándose mientras no se elija salir
        if (currentState == MENU) {
            int action = ShowStartMenu(); // Mostrar el menú principal

            if (action == 1) {
                currentState = GAME; // Cambiar al estado del tablero
            } else if (action == 0) {
                currentState = EXIT; // Salir del juego
            }
        } else if (currentState == GAME) {
            ShowGameBoard();         // Mostrar el tablero
            currentState = MENU;     // Volver al menú después de cerrar el tablero
        }
    }

    return 0;
}
