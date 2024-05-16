#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len;
    char word[100];
    scanf("%s",word);

    len=strlen(word);

    for(i=0,j=len-1;i<j;i++,j--){
        if(word[i]!=word[j]){
            printf("Not palindrome");
            break;
        }
    }
    if(i>=j){
        printf("Palindrome");
    }
    return 0;
}