#include "Triangle.h"

Triangle::Triangle(const Point& p0, const Point& p1, const Point& p2):
    m_p0(p0.getX(), p0.getY()), m_p1(p1.getX(), p1.getY()),
    m_p2(p2.getX(), p2.getY())
{
}

const Point& Triangle::getPoint(int n) const
{
  return n == 0   ? m_p0
         : n == 1 ? m_p1
         : n == 2 ? m_p2
                  : throw std::invalid_argument("Expected 0-3, got" + n);
}

void Triangle::setPoint(int n, const Point& p)
{
  Point& cur = n == 0   ? m_p0
               : n == 1 ? m_p1
               : n == 2 ? m_p2
                        : throw std::invalid_argument("Expected 0-3, got" + n);
  cur.setX(p.getX());
  cur.setY(p.getY());
}

double Triangle::getSideLength(int opposite)
{
  return 0;
}

double Triangle::getArea()
{
  return 0;
}

double Triangle::getPerimeter()
{
  return 0;
}

double Triangle::getAngle(int n)
{
  return 0;
}

void Triangle::translate(double dx, double dy)
{
}

bool Triangle::contains(const Point& p)
{
  return true;
}
