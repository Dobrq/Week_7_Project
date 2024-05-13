//
// Created by Brandon Do on 5/12/2024.
//

#include "Point.h"
#include <cmath>
#include <sstream>

// Constructors
Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

// Setters
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
void Point::setZ(double z) { this->z = z; }

// Getters
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

// String representation
std::string Point::toString() const {
    std::stringstream ss;
    ss << "(" << std::fixed << x << ", " << y << ", " << z << ")";
    return ss.str();
}

// Function to calculate distance between two points
double distance(const Point& p1, const Point& p2) {
    double dx = p1.getX() - p2.getX();
    double dy = p1.getY() - p2.getY();
    double dz = p1.getZ() - p2.getZ();
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}
