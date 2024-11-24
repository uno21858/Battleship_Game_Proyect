// ShipManager.cpp
#include "ShipManager.hpp"
#include "raylib.h"
#include <iostream>

ShipManager::ShipManager(Player& player) : player(player), currentShipIndex(0) {}

void ShipManager::PlaceShipsOnBoard() {
    // Coloca las naves en las posiciones predeterminadas o aleatorias
    // Este es un ejemplo, podrías colocar las naves con un algoritmo que las ubique en diferentes lugares
    player.AddShip(Naves(1, Vector2{100, 100}, 0.25f));  // Coloca un Acorazado
    player.AddShip(Naves(2, Vector2{250, 100}, 0.25f));  // Coloca una Lancha
    player.AddShip(Naves(3, Vector2{400, 100}, 0.25f));  // Coloca un Submarino
}

void ShipManager::DrawShipsOnBoard() {
    // Dibuja todas las naves del jugador
    for (auto& ship : player.GetShips()) {
        ship.Draw();
    }
}

void ShipManager::HandleShipRotation() {
    // Rotar la nave seleccionada
    if (IsKeyPressed(KEY_R)) {
        player.GetShips()[currentShipIndex].Rotate();  // Cambia la rotación de la nave seleccionada
    }
}

void ShipManager::HandleShipPlacement(Vector2 position) {
    // Mueve la nave seleccionada a una nueva posición
    player.GetShips()[currentShipIndex].SetPosition(position);
}
