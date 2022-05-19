#include <stdio.h>

const double PI = 3.14;

struct Wheel
{
    float radius;
    int angle;
};

float getDistance(Wheel wheel)
{
    float distance = wheel.radius * 2 * PI * wheel.angle / 360;

    return distance;
}

float getDistance2(Wheel *wheel)
{
    float distance = wheel->radius * 2 * PI * wheel->angle / 360;

    return distance;
}

float getDistance3(Wheel &wheel)
{
    float distance = wheel.radius * 2 * PI * wheel.angle / 360;

    return distance;
}

int main()
{
    float dist, dist2, dist3;
    Wheel wheel = {4.5, 60};

    dist = getDistance(wheel);
    dist2 = getDistance2(&wheel);
    dist3 = getDistance3(wheel);

    printf("%f, %f, %f\n", dist, dist2, dist3);
}