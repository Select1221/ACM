#include<stdio.h>

int main(int argc, char const *argv[])
{
    double R,M;
    int Y;
    scanf("%lf %lf %d",&R,&M,&Y);

    for (int i = 0; i < Y; i++)
    {
       M*=1+R/100;
    }
    
    printf("%d\n",(int)M);

    return 0;
}
