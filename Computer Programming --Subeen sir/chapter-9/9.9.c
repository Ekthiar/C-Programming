#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],ch;
    int length, is_word_strated,i;

    gets(s);

    length=strlen(s);
    is_word_strated=0;

    for(i=0;i<length;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(is_word_strated==0)
            {
                is_word_strated=1;
                ch='A'+(s[i]-'a');
                printf("%c",ch);

            }

            else
            {
                printf("%c",s[i]);
            }
        }

        else if(s[i]>='A' && s[i]<= 'B')
        {
            if(is_word_strated==0)
            {
                is_word_strated=1;
            }
            else
            {
                printf("%c",s[i]);
            }
        }

        else
        {
            if(is_word_strated==1)
            {
                is_word_strated=0;
                printf("\n");

            }
        }
    }

    return 0;
}
