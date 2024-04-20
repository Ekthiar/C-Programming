#include<stdio.h>

int main()
{
    char country[]={'B','a','n','g','l','a','d','e','s','h','\0'};

    printf("%s\n",country);

    int length=10;

    for(int i=0;i<length;i++)
    {
        if(country[i]>='a' && country[i]<='z')
        {
            country[i]='A'+(country[i]-'a');
        }
    }

    printf("%s",country);

    return 0;
}
