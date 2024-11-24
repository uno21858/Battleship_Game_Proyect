#pragma once

#include "naves.hpp"   // Para acceder a la clase Naves
#include "Tablero.hpp" // Para gestionar la relación con el tablero
#include "Player.hpp"  // Para gestionar los jugadores

class ShipManager {
public:
    ShipManager(Player& player);  // Constructor que recibe al jugador
    void PlaceShipsOnBoard();     // Función para colocar las naves en el tablero
    void DrawShipsOnBoard();      // Función para dibujar las naves en el tablero
    void HandleShipRotation();    // Función para manejar la rotación de las naves
    void HandleShipPlacement(Vector2 position); // Coloca una nave en la posición

private:
    Player& player;  // Referencia al jugador que tiene las naves
    int currentShipIndex;  // Índice de la nave que se está colocando o moviendo
};