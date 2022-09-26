#include<stdio.h>

int main(int argc, char const *argv[])
{
    double a;
    scanf("%lf",&a);
    if(a>=90 && a<=100)
    {
        printf("A");
    }else if(a>=80 && a<90)
    {
        printf("B");
    }else if (a>=70 && a<80)
    {
        printf("C");
    }else if (a>=60 && a<70)
    {
        printf("D");
    }else
    {
        printf("E");
    }
    
    return 0;
}
