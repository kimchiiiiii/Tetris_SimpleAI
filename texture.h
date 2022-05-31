#pragma once
#include <string>

#include "SDL.h"

class Texture
{
public:
    Texture();
    ~Texture();
    void free();

    void loadFromImage(std::string path);
    void loadFromText(std::string text, SDL_Color text_color);
    void render(int x, int y, SDL_Rect* clip = nullptr);
    void renderCentered(int x, int y);
    void setAlphaMode(Uint8 alpha);

    int getWidth();
    int getHeight();

private:
    SDL_Texture* mTexture;
    int width;
    int height;
};

