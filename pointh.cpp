#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x = 0, int y = 0);

    Point operator+(const Point& other) const;
    Point operator-(const Point& other) const;
    Point operator*(int scalar) const;
    Point operator/(int scalar) const;

    void print() const;

private:
    int x, y;
};

#endif // POINT_H
