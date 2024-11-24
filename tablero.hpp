#pragma once

#include "include/raylib.h"
#include "Naves.hpp"
#include "Player.hpp"  // Incluir la clase Player

extern const int rows;
extern const int cols;
extern const int cellSize;

class Tablero {
public:
    // Constructor que ahora recibe un objeto Player
    Tablero(Player& player);
    ~Tablero();

    void DrawGameGrid(int offsetX, int offsetY);
    void DrawShips(Player& player);
    void PlaceShip(Vector2 position, int type, Player& player);

private:
    Player& player;  // Referencia al jugador que se pasa en el constructor
};