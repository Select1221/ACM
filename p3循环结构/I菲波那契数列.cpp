#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, fs1 = 1, fs2 = 1, tmp;
    scanf("%d", &k);
    if (k <= 2)
    {
        printf("1\n");
    }
    else
    {
        for (int i = 3; i <= k; i++)
        {
            tmp = fs2;
            fs2 += fs1;
            fs1 = tmp;
        }
        printf("%d\n", fs2);
    }

    return 0;
}
