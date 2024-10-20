#include <iostream>
#include "math.h"
using namespace std;
int main()
{
double x, y, z, a;
printf ("x=");
scanf("%lf", &x);
printf ("y=");
scanf("%lf", &y);
printf ("z=");
scanf("%lf", &z);
a = pow(x, 3) * pow(tan(x + y), 2) + (z/ sqrt(x + y)) - 2 * tan(25.0 * M_PI / 180);
printf("a= %lf\n", a);
}

