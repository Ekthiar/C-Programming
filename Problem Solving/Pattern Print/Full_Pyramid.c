/*
        *
       ***
      *****
     *******
    *********
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int s=n-1;
    int k=n-s;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
        s--;
        k+=2;
    }
    return 0;
}