#include<stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);

    int star=1;
    int space=n*2-2;


    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            printf("c");
        }
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("c");
        }
        printf("\n");
        star++;
        space=space-2;
    }
    return 0;
}