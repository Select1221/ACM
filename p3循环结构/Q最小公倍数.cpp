#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int n = a * b;
    int m = a % b;
    while (m)
    {
        a = b;
        b = m;
        m = a % b;
    }
    printf("%d\n", n / b);

    return 0;
}