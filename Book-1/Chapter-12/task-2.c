#include<stdio.h>
#include<math.h>

int main()
{
    int num=95;

    int n=0;
    while(pow(2,n)<=num) n++;


    int i=0;
    int bin[n];

    while(num!=0){
        if(num%2==0){
            bin[i]=1;
            num=num/2;
            i++;
        }
        else{
            bin[i]=0;
            num=num/2;
            i++;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",bin[i]);
    }

    return 0;
}
