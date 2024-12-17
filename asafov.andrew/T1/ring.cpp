#include "ring.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

asafov::Ring::Ring(point_t pos, double radi, double rado):
center(pos), radiusi(radi), radiuso(rado)
{}

double asafov::Ring::getArea() const
{
  return M_PI * (radiuso * radiuso - radiusi * radiusi);
}

rectangle_t asafov::Ring::getFrameRect() const
{
  rectangle_t frect;
  frect.height = radiusi * 2;
  frect.width = radiuso * 2;
  frect.pos = center;
  return frect;
}

void asafov::Ring::move(double x, double y)
{
  center.x += x;
  center.y += y;
}

void asafov::Ring::move(point_t pos)
{
  center = pos;
}

void asafov::Ring::scale(point_t pos, double scale)
{
  center.x += (center.x - pos.x) * (scale - 1);
  center.y += (center.y - pos.y) * (scale - 1);
  radiusi *= scale;
  radiuso *= scale;
}
