#include<stdio.h>

int main()
{
    int n=5;
    int i=1;

    for( ; ; ){
        if(i>10){
            break;
        }

        printf("%d X %d = %d\n",n,i,i*n);
        i=i+1;
    }
    return 0;
}
