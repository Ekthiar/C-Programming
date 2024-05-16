#include<stdio.h>

int main()
{
    char ara[1000];

    while( NULL!=gets(ara)){
        printf("%s\n",ara);
    }
    return 0;
}
