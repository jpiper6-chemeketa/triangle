//----------------------------------------------------------
// CS162 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may be republished without approval.
//----------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

#include "Point.h" 

Point::Point() {
    m_x = 0;
    m_y = 0;
}

Point::Point(double x, double y) {
    m_x = x;
    m_y = y;
}

double Point::getX() const {
    return m_x;
}

double Point::getY() const {
    return m_y;
}

void Point::setX(double newX) {
    m_x = newX;
}

void Point::setY(double newY) {
    m_y = newY;
}

void Point::translate(double xShift, double yShift) {
    m_x += xShift;
    m_y += yShift;
}

double Point::distanceTo(const Point& other) const {
    double xDiff = m_x - other.m_x;
    double yDiff = m_y - other.m_y;
    return sqrt( pow(xDiff, 2) + pow(yDiff, 2) );
}

bool Point::isSameAs(const Point& other) const {
    const double EPSILON = 0.0000001;
    if( (abs(m_x - other.m_x) < EPSILON) &&
        (abs(m_y - other.m_y) < EPSILON) )
        return true;
    else
        return false;
}

void Point::print() const {
    cout << "Point at (" << m_x << "," << m_y << ")" << endl;
}
