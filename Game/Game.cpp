#include "Game.hpp"

Game::Game(){
  graphicsEngine.WindowInit("New Window", 800, 600);
  while(!eventEngine.isGameExited()){
    eventEngine.PollEvents();
    graphicsEngine.Draw();
  }
  graphicsEngine.WindowDestroy();
}

Game::~Game(){}