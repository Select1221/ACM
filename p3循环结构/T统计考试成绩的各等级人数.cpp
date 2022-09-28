#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int A, B, C, D, E;
    A = B = C = D = E = 0;
    scanf("%d", &a);
    while (a != -1)
    {
        if (a >= 90 && A <= 100)
        {
            A++;
        }
        else if (a >= 80 && A < 90)
        {
            B++;
        }
        else if (a >= 70 && A < 80)
        {
            C++;
        }
        else if (a >= 60 && A < 70)
        {
            D++;
        }
        else
        {
            E++;
        }
        scanf("%d", &a);
    }

    printf("%d %d %d %d %d\n", A, B, C, D, E);

    return 0;
}
