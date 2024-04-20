#include<stdio.h>

int str_length(char str[])
{
    int length;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[1000];

    int length;

    while(1==scanf("%s",str))
    {
        length=str_length(str);
        printf("length: %d\n",length);
    }

    return 0;
}
