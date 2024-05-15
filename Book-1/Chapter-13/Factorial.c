#include<stdio.h>

int main()
{
    int n,fect=1;
    scanf("%d",&n);

    if(n==0){
        printf("0");
        return 0;
    }

    while(n!=0){
        fect=fect*n;
        n--;
    }

    printf("%d",fect);

    return 0;
}