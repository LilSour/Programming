#ifndef POINT_H
#define POINT_H

typedef struct {
    double x, y, z;
} Point;

Point initPoint(double x, double y, double z);
double distance(Point a, Point b);

#endif
