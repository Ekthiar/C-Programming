#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
        return 0;
    }
    int n=0;

    while(pow(2,n)<=num) n++;

    int binary[n];
    int temp=0;

    for(int i=n-1,j=0;i>=0;i--,j++){
        if(temp+pow(2,i)<=num){
            binary[j]=1;
            temp=temp+pow(2,i);
        }
        else{
            binary[j]=0;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",binary[i]);
    }
    return 0;
}
