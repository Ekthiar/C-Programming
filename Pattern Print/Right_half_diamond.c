/*  
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * * 
    * *
    * 

*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int s=1;

    for(int i=1;i<=(n*2)-1;i++){
        for(int j=1;j<=s;j++){
            printf("* ");
        }
        printf("\n");
        if(i<n){
            s++;
        }
        else if(i>=n){
            s=s-1;
        }
    }
    return 0;
}
