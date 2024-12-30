#pragma once

#include <SDL2/SDL.h>

class Game;

class EventEngine{
private:
  SDL_Event event;
  Game* game;

public:
  EventEngine();
  EventEngine(Game* game);
  ~EventEngine();
  
  void PollEvents();
};