#include <math.h>
#include "point.h"

Point initPoint(double x, double y, double z) {
    Point p = {x, y, z};
    return p;
}

double distance(Point a, Point b) {
    return sqrt(
        (a.x - b.x)*(a.x - b.x) +
        (a.y - b.y)*(a.y - b.y) +
        (a.z - b.z)*(a.z - b.z)
    );
}
