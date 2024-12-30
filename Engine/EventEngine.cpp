#include "EventEngine.hpp"

#include <iostream>
#include "../Game/Game.hpp"

EventEngine::EventEngine(): gameExited(0){}
 
EventEngine::~EventEngine(){}
 
void EventEngine:: PollEvents(){
  SDL_PollEvent(&this->event);
  switch (this->event.type)
  {
  case SDL_QUIT:
    gameExited = 1;
    break;
  
  default:
    break;
  }
}

int EventEngine::isGameExited(){
  return gameExited;
}
