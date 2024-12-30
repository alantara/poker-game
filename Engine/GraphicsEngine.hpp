#pragma once

#include <SDL2/SDL.h>

class GraphicsEngine{
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  
public:
  GraphicsEngine();
  ~GraphicsEngine();
  
  void WindowInit(const char* title, int width, int height);
  void WindowDestroy();

  void Draw();
};