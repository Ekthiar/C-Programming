#include<stdio.h>

double cycle_area(int r)
{
    return r*r*3.1416;
}

int main()
{
    int r=2;

    double result=cycle_area(r);
    printf("the cycle area is: %lf\n",result);

    return 0;
}
