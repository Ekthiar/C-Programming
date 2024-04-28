#include<stdio.h>

int main()
{
    int ara[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            ara[i][j]=(i+1)*(j+1);
        }
    }
    int odd=0,even=0,sum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d X %d=%d\n",(i+1),(j+1),ara[i][j]);
            sum=sum+ara[i][j];
            if(ara[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        printf("\n");
    }

    printf("%d even number in array !\n",even);
    printf("%d odd number in array !\n",odd);

    printf("Total number of this array is:%d\n",even+odd);

    printf("Sum of array is:%d\n",sum);

    return 0;
}
