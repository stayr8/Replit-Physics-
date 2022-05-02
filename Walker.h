#pragma once

#include "SDL.h"
#include "Vector2D.h"
#include "Vehicle.h"
#include "SDL2_gfxPrimitives.h"

class Walker 
{
  
public:
  Walker();
  void draw(SDL_Renderer* renderer);
  void update();

private:
  Vector2D* Dir;
  Vehicle* m_vehicle;
};