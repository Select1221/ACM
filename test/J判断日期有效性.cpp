#include <stdio.h>

int main(int argc, char const *argv[])
{
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    if (y >= 2000 && y <= 2099)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d > 0 && d <= 31)
            {
                printf("Yes.\n");
            }
            else
            {
                printf("No.\n");
            }
        }
        else if (m == 2)
        {
            int c = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
            if (d > 0 && d <= 28 + c)
            {
                printf("Yes.\n");
            }
            else
            {
                printf("No.\n");
            }
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d > 0 && d <= 30)
            {
                printf("Yes.\n");
            }
            else
            {
                printf("No.\n");
            }
        }else
        {
            printf("No.\n");
        }
        
    }
    else
    {
        printf("No.\n");
    }

    return 0;
}
