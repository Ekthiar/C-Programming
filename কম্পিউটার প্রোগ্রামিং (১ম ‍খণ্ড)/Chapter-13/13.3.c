#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int space=0;
    int star=n;

    for(int i=1;i<=n*2-1;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("c");
        }
        printf("\n");

        if(i<n){
            space++;
            star--;
        }
        else if(i>=n){
            space--;
            star++;
        }
    }
}