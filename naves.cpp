#include "naves.hpp"
#include "include/raylib.h"

Naves::Naves(int type, Vector2 position, float scale)
    : type(type), position(position), scale(scale), rotation(0.0f) {  // Inicializa en 0 grados
    const char* imagePath;

    switch (type) {
        case 1:
            imagePath = "../Graphics/ship1.png";
        break;
        case 2:
            imagePath = "../Graphics/ship2.png";
        break;
        case 3:
            imagePath = "../Graphics/ship3.png";
        break;
        default:
            imagePath = "../Graphics/ship1.png";
        break;
    }

    Image image = LoadImage(imagePath);
    int newWidth = static_cast<int>(image.width * scale);
    int newHeight = static_cast<int>(image.height * scale);
    ImageResize(&image, newWidth, newHeight);
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
}


Naves::~Naves() {
    UnloadTexture(texture);
}

void Naves::Draw() {
    DrawTextureEx(texture, position, rotation, 1.0f, WHITE);  // Dibuja con la rotación
}

void Naves::SetPosition(Vector2 newPosition) {
    position = newPosition;  // Actualiza la posición de la nave
}

void Naves::Rotate() {
    if (rotation == 0.0f) {
        rotation = 90.0f;  // Rota a 90 grados
    } else {
        rotation = 0.0f;  // Rota a 0 grados
    }
}

/*
// En alguna parte de tu código donde quieras que la nave rote:
if (IsKeyPressed(KEY_R)) {
    nave.Rotate();  // Cambia entre 0° y 90° cuando se presiona R
}
*/