/*      *
       **
      ***
     ****
    *****
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    // first way

    /*int k=n-1;
    int s=n-k;

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=k;j++){
            printf(" ");
        }

        for(int j=1;j<=s;j++){
            printf("*");
        }

        k--;
        s++;
        printf("\n");
    }*/

    //second way

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}