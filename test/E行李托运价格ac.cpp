#include <stdio.h>

int main(int argc, char const *argv[])
{
    double w, a;
    scanf("%lf %lf", &w, &a);

    if (w == 0)
    {
        printf("0.000\n");
        printf("%.3lf\n", a);
    }
    else if (w <= 10 && w > 0)
    {
        printf("2.330\n");
        printf("%.3lf\n", a - 2.33);
    }
    else if (w > 10)
    {
        printf("%.3lf\n", (w - 10) * 1.165 + 2.33);
        printf("%.3lf\n", a - ((w - 10) * 1.165 + 2.33));
    }

    return 0;
}
