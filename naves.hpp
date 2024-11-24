#pragma once
#include <raylib.h>

class Naves {
public:
    Naves(int type, Vector2 position, float scale);
    ~Naves();

    void Draw();  // Metodo para dibujar la nave
    void Rotate();  // Metodo para alternar la rotación entre 0° y 90°
    void SetPosition(Vector2 position);  // Metodo para actualizar la posición de la nave

private:
    Vector2 position;
    int type;
    float scale;
    float rotation;  // Atributo para la rotación
    Texture2D texture;  // Atributo para la textura
};
