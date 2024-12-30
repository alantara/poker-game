#include "GraphicsEngine.hpp"

#include <iostream>

GraphicsEngine::GraphicsEngine(){}

GraphicsEngine::~GraphicsEngine(){
  this->WindowDestroy();
}

void GraphicsEngine::WindowInit(const char* title, int width, int height){
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
    std::cout << "Failed to initiate SDL: " << SDL_GetError() << std::endl;
    exit(1);
  }

  this->window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);
  if(this->window == NULL){
    std::cout << "Failed to initiate Window: " << SDL_GetError() << std::endl;
    exit(1);
  }

  this->renderer = SDL_CreateRenderer(this->window, -1, 0);
  if(this->renderer == NULL){
    std::cout << "Failed to initiate Renderer: " << SDL_GetError() << std::endl;
    exit(1);
  }
}

void GraphicsEngine::WindowDestroy(){
  SDL_DestroyRenderer(this->renderer);
  SDL_DestroyWindow(this->window);
  SDL_Quit();
}

void GraphicsEngine::Draw(){
  SDL_SetRenderDrawColor(this->renderer, 220, 80, 255, 255);
  SDL_RenderClear(this->renderer);

  SDL_RenderPresent(this->renderer);
}
