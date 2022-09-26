#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, K, M = 1, home = 200;
    scanf("%d %d", &N, &K);
    while (M <= 20)
    {
        if (N * M >= home)
        {
            printf("%d\n", M);
            return 0;
        }
        home *= 1 + K / 100.0;
        M++;
    }

    printf("Impossible\n");

    return 0;
}
