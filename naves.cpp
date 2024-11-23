#include "naves.hpp"


Naves::Naves(int type, Vector2 position){
    this -> type = type;
    this -> position = position;

    switch (type)
    {
    case 1:
        image = LoadTexture("../Graphics/ship1.png");  // Acorazado
        break;
    case 2:
        image = LoadTexture("../Graphics/ship2.png");  // Lancha
        break;
    case 3:
        image = LoadTexture("../Graphics/ship3.png");  // Submarino
        break;
    default:
        image = LoadTexture("../Graphics/ship1.png");
        break;
    }
}

void Naves::Draw(){
    DrawTextureV(image, position, WHITE);
}

int Naves::getType(){
    return type;
}
/*
bool Naves::isPressed(Vector2 mousePos, bool mousePressed){
    Rectangle rect = {position.x, position.y, static_cast<float>(image.width), static_cast<float>(image.height)};

    if(CheckCollisionPointRec(mousePos, rect) && mousePressed){
        return true;
    }
    return false;
}

 */