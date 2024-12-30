#pragma once

#include <SDL2/SDL.h>

class Game;

class EventEngine{
private:
  SDL_Event event;
  int gameExited;

public:
  EventEngine();
  ~EventEngine();
  
  void PollEvents();
  int isGameExited();
};