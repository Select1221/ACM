#include <stdio.h>

// 0 1 2 3 4 5 6 7 8 9 10
// 0 2 5
// 0 2 5 0 2 5 0 2 5 0 2
// 0 5 0 2
// 0 5 0 2 0 5 0 2 0 5 0

int main(int argc, char const *argv[])
{
    int n, na, nb;
    int a = 0, b = 0;
    int na_arr[100], nb_arr[100];
    scanf("%d %d %d", &n, &na, &nb);

    for (int i = 0; i < na; i++)
    {
        scanf("%d", &na_arr[i]);
    }

    for (int i = 0; i < nb; i++)
    {
        scanf("%d", &nb_arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (
            (na_arr[i % na] == 0 && nb_arr[i % nb] == 2) ||
            (na_arr[i % na] == 2 && nb_arr[i % nb] == 5) ||
            (na_arr[i % na] == 5 && nb_arr[i % nb] == 0))
        {
            a++;
        }
        else if (
            (nb_arr[i % nb] == 0 && na_arr[i % na] == 2) ||
            (nb_arr[i % nb] == 2 && na_arr[i % na] == 5) ||
            (nb_arr[i % nb] == 5 && na_arr[i % na] == 0))
        {
            b++;
        }
    }

    if (a < b)
    {
        printf("B\n");
    }
    else if (a > b)
    {
        printf("A\n");
    }
    else
    {
        printf("draw\n");
    }

    return 0;
}
