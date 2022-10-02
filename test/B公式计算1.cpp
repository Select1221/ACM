#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.4lf\n", (a * b + b * c + a * c) / (a * a + b * b + c * c));
    return 0;
}
