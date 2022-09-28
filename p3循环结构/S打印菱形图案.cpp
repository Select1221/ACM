#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("*\n");
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2 - i; j++)
            {
                printf(" ");
            }

            if (i != 0)
            {
                printf("*");
            }

            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }

        printf("*");
        for (int i = 0; i < n - 2; i++)
        {
            printf(" ");
        }
        printf("*\n");

        for (int i = n / 2; i > 0; i--)
        {
            for (int j = 0; j < n / 2 - i + 1; j++)
            {
                printf(" ");
            }

            if (i != 1)
            {
                printf("*");
            }

            for (int j = 0; j < 2 * (i - 1) - 1; j++)
            {
                printf(" ");
            }

            printf("*\n");
        }
    }

    return 0;
}