//Uppercase to lowercase

#include<stdio.h>

int main()
{
    char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};

    printf("%s\n",country);

    int length=10;

    for(int i=0;i<length;i++){
        if(country[i]>='A' && country[i]<='Z'){
            country[i]='a'+(country[i]-'A');
        }
    }

    printf("%s\n",country);

    return 0;
}
