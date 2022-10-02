#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, K, M = 1;
    double home = 200;
    scanf("%d %d", &N, &K);
    while (M <= 20)
    {
        if (N * M >= home)
        {
            printf("%d\n", M);
            break;
        }
        home *= 1 + K / 100.0;
        M++;
    }
    
    if (M > 20)
    {
        printf("Impossible\n");
    }

    return 0;
}
