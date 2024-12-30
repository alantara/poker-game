#pragma once

#include "../Engine/GraphicsEngine.hpp"
#include "../Engine/EventEngine.hpp"

class Game{
private:
  GraphicsEngine graphicsEngine;
  EventEngine eventEngine;
  int active;

public:
  Game();
  ~Game();

  void Stop();
};