#include <stdio.h>

int main(int argc, char const *argv[])
{
    double amunty;
    for (int i = 1; i <= 100; i++)
    {
        amunty += i;
    }
    for (int i = 1; i <= 50; i++)
    {
        amunty+=i*i;
    }
    for (int i = 1; i <= 10; i++)
    {
        amunty+=1.0/i;
    }
    printf("%.4lf", amunty);
    return 0;
}
