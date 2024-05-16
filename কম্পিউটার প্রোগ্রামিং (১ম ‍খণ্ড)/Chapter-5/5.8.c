// GCD -- greatest common Divisor

#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    int x=(a>b)?b:a;

    while(x!=0){
    if(a%x==0 && b%x==0){
        printf("GCD is=%d",x);
         break;
    }
    else{
        x--;
    }
    }

    return 0;
}
