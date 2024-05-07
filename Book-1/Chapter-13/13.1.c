#include<stdio.h>

int main()
{
    int n=3;

    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            printf("C");
        }
        printf("\n");
    }

    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("C");
        }
        printf("\n");
    }
}
