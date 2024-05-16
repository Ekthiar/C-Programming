// even, odd without modulus

#include<stdio.h>

int main()
{
    int num,remain;

    num=6;

    remain=num-(2*(num/2));

    if(remain==0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }
    return 0;
}
