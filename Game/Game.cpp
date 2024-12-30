#include "Game.hpp"

Game::Game(): eventEngine(this), active(1){
  graphicsEngine.WindowInit("New Window", 800, 600);
  while(this->active){
    eventEngine.PollEvents();
    graphicsEngine.Draw();
  }
  graphicsEngine.WindowDestroy();
}

Game::~Game(){}

void Game::Stop(){
  active = 0;
}