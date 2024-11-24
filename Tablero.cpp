#include "include/raylib.h"
#include "Tablero.hpp"
#include "Player.hpp"

const int rows = 10;
const int cols = 10;
const int cellSize = 130;

Tablero::Tablero(Player& player) : player(player) {
    // Aquí puedes hacer inicializaciones si es necesario
}

Tablero::~Tablero() {
    // Aquí puedes liberar recursos si es necesario
}

void Tablero::DrawGameGrid(int offsetX, int offsetY) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int x = offsetX + col * cellSize;
            int y = offsetY + row * cellSize;

            DrawRectangleLines(x - 2, y - 2, cellSize + 4, cellSize + 4, DARKGRAY);
            DrawRectangleLines(x - 1, y - 1, cellSize + 2, cellSize + 2, GRAY);
            DrawRectangleLines(x, y, cellSize, cellSize, LIGHTGRAY);
        }
    }
}

void Tablero::DrawShips(Player& player) {
    for (auto& ship : player.GetShips()) {
        ship.Draw();
    }
}

void Tablero::PlaceShip(Vector2 position, int type, Player& player) {
    Naves newShip(type, position, 0.25);
    player.AddShip(newShip);
}
