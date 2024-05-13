//
// Created by Brandon Do on 5/12/2024.
//
 
#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point(double x = 0, double y = 0, double z = 0);

    // Setters
    void setX(double x);
    void setY(double y);
    void setZ(double z);

    // Getters
    double getX() const;
    double getY() const;
    double getZ() const;

    // String representation
    std::string toString() const;
};

// Function to calculate distance between two points
double distance(const Point& p1, const Point& p2);

#endif // POINT_H

