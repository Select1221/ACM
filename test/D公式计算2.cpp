#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", (a*a+b*b)/((a-b)*(a+b)));
    return 0;
}
