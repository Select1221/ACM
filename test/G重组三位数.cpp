#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int a1, a2, a3;
    scanf("%d", &a);
    a1 = a % 10;
    a /= 10;
    a2 = a % 10;
    a /= 10;
    a3 = a % 10;

    if (a1 < a2)
    {
        a = a1;
        a1 = a2;
        a2 = a;
    }
    else
    {
        if (a2 < a3)
        {
            if (a1 < a3)
            {
                a = a1;
                a1 = a3;
                a3 = a;

                a = a3;
                a3 = a2;
                a2 = a;
            }
            else
            {
                a = a3;
                a3 = a2;
                a2 = a;
            }
        }
    }
    printf("%d%d%d\n",a1,a2,a3);
    return 0;
}
