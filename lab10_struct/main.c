#include <stdio.h>
#include "point.h"

int main() {
    double x1, y1, z1;
    double x2, y2, z2;

    printf("Введите координаты точки A (x y z): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Введите координаты точки B (x y z): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    Point A = initPoint(x1, y1, z1);
    Point B = initPoint(x2, y2, z2);

    double d = distance(A, B);

    printf("Расстояние между точками: %.3f\n", d);

    return 0;
}
