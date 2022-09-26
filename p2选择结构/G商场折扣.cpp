#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    
    //金额
    double amount;
    
    //输入金额
    scanf("%lf",&amount);

    if (amount<250)
    {
        /* 不足250 */
        printf("%.2lf",amount);
    }else if (amount>=250 && amount<500)
    {
        /* 满250元（含250）不足500元的 */
        printf("%.2lf",amount*0.95);
    }else if (amount>=500 && amount<1000)
    {
        /* 满500元（含500）不足1000元的 */
         printf("%.2lf",amount*0.9);
    }else if (amount>=1000 && amount<2000)
    {
        /* 满1000元（含1000）不足2000元的 */
         printf("%.2lf",amount*0.85);
    }else if (amount>=2000)
    {
        /* 满2000元（含2000） */
         printf("%.2lf",amount*0.8);
    }else{
        printf("error!");
    }
    
    return 0;
}
