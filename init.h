#pragma once
#include <SDL.h>

#include "texture.h"

extern SDL_Window* gWindow;
extern Texture tetrominoSprites;

// Initializes game; returns true on success, false on failure
bool initialize();

// Loads all sprites we will be using, as well as the necessary fonts
bool loadMedia();

// Shuts down all SDL subsystems, frees memory and closes window
void close();

