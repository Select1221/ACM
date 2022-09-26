#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    double amount,money;
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {
        scanf("%lf",&money);
        amount+=money;
    }
    printf("%.0lf",amount);

    return 0;
}
