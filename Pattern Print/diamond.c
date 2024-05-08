/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int S=1;
    int R=n-1;
    
     for(int i=1;i<=5;i++){
        for(int j=1;j<=R;j++){
            printf(" ");
        }
        for(int j=1;j<=S;j++){
            printf("*");
        }
        S=S+2;
        R--;
        printf("\n");
     }
}