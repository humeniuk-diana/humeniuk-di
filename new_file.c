#include <iostream>
#include "math.h"
using namespace std;
int main()
{
double x, y, z, b;
printf ("x=");
scanf("%lf", &x);
printf ("y=");
scanf("%lf", &y);
printf ("z=");
scanf("%lf", &z);
b = pow(x, 4) * pow(tan(x + y), 2) + (z/ sqrt(x + y)) - 2 * tan(25.0 * M_PI / 180);
printf("a= %lf\n", a);
}

