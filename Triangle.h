#include "Point.h"

class Triangle {
  Point m_p0, m_p1, m_p2;

public:
  Triangle(const Point& p0, const Point& p1, const Point& p2):
      m_p0(p0.getX(), p0.getY()), m_p1(p1.getX(), p1.getY()),
      m_p2(p2.getX(), p2.getY())
  {
  }
};