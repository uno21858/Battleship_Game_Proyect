#pragma once
#include <raylib.h>

class Naves{
    public:
        Naves(int type, Vector2 position);
        void Update();
        void Draw();
        int getType();
        Texture2D image;
        int type;
        Vector2 position;
    bool isPressed(Vector2 mousePos, bool mousePressed);
    private:

};