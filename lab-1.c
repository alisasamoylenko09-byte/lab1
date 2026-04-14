#include <stdio.h>
#include <math.h>

int main() {
double x1 = 0, y1 = 0;
double x2 = 0, y2 = 3;
double x3 = 4, y3 = 0;
double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
double P = a + b + c;
double S = fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2;
printf("У такого трикутника будуть параметри:\n");    
printf("Периметер = %.0f\n", P);
printf("Площа = %.0f\n", S);
    return 0;
}