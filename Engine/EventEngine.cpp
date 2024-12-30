#include "EventEngine.hpp"

#include <iostream>
#include "../Game/Game.hpp"

EventEngine::EventEngine(){}
EventEngine::EventEngine(Game* game): game(game){}
 
EventEngine::~EventEngine(){}
 
void EventEngine:: PollEvents(){
  SDL_PollEvent(&this->event);
  switch (this->event.type)
  {
  case SDL_QUIT:
    game->Stop();
    break;
  
  default:
    break;
  }
}
