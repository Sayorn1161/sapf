#include "Point.h"
#include <iostream>

Point::Point(int x, int y) : x(x), y(y) {}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator-(const Point& other) const {
    return Point(x - other.x, y - other.y);
}

Point Point::operator*(int scalar) const {
    return Point(x * scalar, y * scalar);
}

Point Point::operator/(int scalar) const {
    return Point(x / scalar, y / scalar);
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
