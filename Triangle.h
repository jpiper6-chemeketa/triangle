#include "Point.h"
#include <stdexcept>

class Triangle {
  Point m_p0, m_p1, m_p2;

public:
  Triangle(const Point& p0, const Point& p1, const Point& p2);

  const Point& getPoint(int n) const;
  void setPoint(int n, const Point& p);

  double getSideLength(int opposite);
  double getArea();
  double getPerimeter();
  double getAngle(int n);

  void translate(double dx, double dy);
  bool contains(const Point& p);
};