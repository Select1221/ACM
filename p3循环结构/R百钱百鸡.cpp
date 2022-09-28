#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n / 7; i++)
    {
        if ((n - 7 * i) % 4 == 0)
        {
            x++;
            // printf("公鸡=%d 母鸡=%d 小鸡=%d\n", i, (n - 7 * i) / 4, n - i - (n - 7 * i) / 4);
        }
    }
    printf("%d\n", x);
    return 0;
}
// a*5+b*3+(n-a-b)/3=n
// a*15+b*9+n-a-b=n*3
// a*14+b*8=n*2
// a*7+b*4=n
// b*4=n-a*7