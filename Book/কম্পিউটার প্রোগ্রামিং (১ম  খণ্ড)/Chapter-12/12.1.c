#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[10];
    scanf("%s",binary);

    int decimal=0;
    int len=strlen(binary);
    int power=len-1;

    for(int i=0;i<len;i++){
        decimal=decimal+(binary[i]-'0')*pow(2,power);
        power--;
    }

    printf("%d",decimal);

    return 0;
}
