#include "Player.hpp"
#include "Naves.hpp"  // Asegúrate de incluir la clase Naves para manipular las naves

Player::Player() {
    // Constructor por defecto, se puede agregar lógica para inicializar las naves si es necesario
}

void Player::AddShip(const Naves& ship) {
    ships.push_back(ship);  // Agrega una nueva nave al vector de naves
}

void Player::RemoveShip(int index) {
    if (index >= 0 && index < ships.size()) {
        ships.erase(ships.begin() + index);  // Elimina la nave en el índice especificado
    }
}

std::vector<Naves>& Player::GetShips() {
    return ships;  // Devuelve el vector de naves
}

void Player::PlaceShip(int shipIndex, Vector2 position) {
    if (shipIndex >= 0 && shipIndex < ships.size()) {
        ships[shipIndex].SetPosition(position);  // Coloca la nave en la nueva posición
    }
}

void Player::RotateShip(int shipIndex) {
    if (shipIndex >= 0 && shipIndex < ships.size()) {
        // Aquí puedes llamar a un metodo de la clase Naves para rotar la nave
        ships[shipIndex].Rotate();  // Rota la nave especificada
    }
}
