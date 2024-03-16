#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    gets(str);

    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z' || str[i]==' '){
            printf("%c\n",str[i]);
        }
    }

    return 0;
}
