#pragma once

#include "usr/include/SDL2/SDL.h"
#include "usr/include/SDL2/SDL2_gfxPrimitives.h"
#include "Vector2D.h"
#include "Vehicle.h"

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