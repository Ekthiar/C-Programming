#include<stdio.h>

int main()
{
    int a,b;

    printf("X+y=");
    scanf("%d",&a);

    printf("X-y=");
    scanf("%d",&b);

    int x=(a+b)/2;
    int y=(a-b)/2;

    printf("\nx=%d\n",x);
    printf("y=%d\n",y);

    return 0;
}
