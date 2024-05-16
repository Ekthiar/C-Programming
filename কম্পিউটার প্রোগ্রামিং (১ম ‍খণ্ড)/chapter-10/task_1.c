#include<stdio.h>

int main()
{
    int size=40;
    if(size<2){
        printf("prime number start from 2\n");
        return 0;
    }
    int ara[size+1];
    ara[0]=0;
    ara[1]=0;
    for(int i=2;i<size+1;i++){
        ara[i]=1;
    }

    for(int i=2;i<=(size/2);i++){
        for(int m=2;(m*i)<=40;m++){
            ara[m*i]=0;
        }
    }

    for(int i=0;i<size+1;i++){
        if(ara[i]!=0){
            printf("%d ",i);
        }
    }


    return 0;
}
