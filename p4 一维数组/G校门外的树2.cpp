#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L, M;
    int s, e, remainder[10002], num = 0;

    for (int i = 0; i < 10002; i++)
    {
        remainder[i] = 1;
    }

    scanf("%d %d", &L, &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &s, &e);
        for (int j = s; j <= e; j++)
        {
            remainder[j] = 0;
        }
    }

    for (int i = 0; i <= L; i++)
    {
        if (remainder[i] == 1)
        {
            num++;
        }
    }

    printf("%d\n",num);

    return 0;
}
