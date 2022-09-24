#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);
    double delta=pow(b,2)-4*a*c;
    if (delta<0)
    {
        printf("No.");
    }else if (delta==0){
        printf("%.3lf",-b/(2*a));
    }else{
        double 
        x1=(-b-pow(delta,0.5))/(a*2),
        x2=(-b+pow(delta,0.5))/(a*2);
        x1<x2?printf("%.3lf %.3lf",x1,x2):printf("%.3lf %.3lf",x2,x1);
    }
    
    return 0;
}
