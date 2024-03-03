#include<stdio.h>

int main()
{
    double c,f;

    printf("Enter the temperature in celsius: ");
    scanf("%lf",&c);

    f=c*1.8+32;

    printf("%lf",f);

    return 0;
}
