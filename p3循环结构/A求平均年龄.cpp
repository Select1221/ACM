#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, age, sum = 0;

    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        scanf("%d", &age);
        sum += age;
    }
    printf("%.2lf", sum * 1.0 / n);
    return 0;
}