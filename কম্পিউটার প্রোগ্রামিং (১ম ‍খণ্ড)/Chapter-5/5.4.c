#include<stdio.h>

int main()
{
    double p,n,r,a,m;

    printf("Principle:=");
    scanf("%lf",&p);

    printf("year: ");
    scanf("%lf",&n);

    printf("Rant:");
    scanf("%lf",&r);

    a=p*(1+n*(r/100));

    printf("totle amount after %0.0lf years =%0.2lf\n",n,a);

    m=a/(n*12);

    printf("Monthly amount:%0.2lf",m);

    return 0;
}
