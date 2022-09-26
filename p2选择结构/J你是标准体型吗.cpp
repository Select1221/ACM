#include<stdio.h>

int main(int argc, char const *argv[])
{
    double weight,height,BMI;
    scanf("%lf %lf",&weight,&height);
    BMI=weight/(height*height);
    if (BMI<18.4)
    {
        printf("Underweight ");
    }else if (BMI>=18.4 && BMI<24.0)
    {
        printf("Normal");
    }else if (BMI>=24.0 && BMI<28.0)
    {
        printf("Overweight");
    }else{
        printf("Obesity");
    }
    
    return 0;
}
