#include<stdio.h>

int main()
{
    int a1,b1,c1,a2,b2,c2;

    printf("a1,b1,c1=");
    scanf("%d%d%d",&a1,&b1,&c1);

    printf("a2,b2,c2=");
    scanf("%d%d%d",&a2,&b2,&c2);

    int x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    int y=(a1*c2-a2*c1)/(a1*b2-a2*b1);

    printf("\nx=%d\n",x);
    printf("y=%d\n",y);

    return 0;

}
