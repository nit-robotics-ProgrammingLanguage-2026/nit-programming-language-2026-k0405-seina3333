#include <stdio.h>

int main(void) {
    double x;
    double a;
    double pi = 3.141592;
    double r = 4.0;
    double radius = r / 2.0;
    scanf("%lf", &x);
    a = x / (2.0 * radius * pi / 360.0);
    printf("%lf\n", a);
    


     
    return 0;
}
