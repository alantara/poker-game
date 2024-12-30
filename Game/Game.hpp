#pragma once

#include "../Engine/GraphicsEngine.hpp"
#include "../Engine/EventEngine.hpp"

class Game{
private:
  GraphicsEngine graphicsEngine;
  EventEngine eventEngine;

public:
  Game();
  ~Game();
};