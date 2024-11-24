#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include "Naves.hpp"  // Incluye la clase Naves para gestionar las naves del jugador

class Player {
public:
    Player();  // Constructor de la clase

    void AddShip(const Naves& ship);   // Agrega una nave al vector de naves
    void RemoveShip(int index);        // Elimina una nave del vector según su índice
    std::vector<Naves>& GetShips();    // Devuelve el vector de naves del jugador

    void PlaceShip(int shipIndex, Vector2 position); // Coloca la nave en la posición especificada
    void RotateShip(int shipIndex);  // Rota la nave seleccionada

private:
    std::vector<Naves> ships;  // Contenedor para las naves del jugador
};

#endif
