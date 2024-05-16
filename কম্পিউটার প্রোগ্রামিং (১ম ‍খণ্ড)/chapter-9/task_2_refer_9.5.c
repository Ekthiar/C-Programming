#include <stdio.h>

int str_length(char str[])
{
  int i=0;

  while(str[i]!='\0')
  {
      i++;
  }
  return i;
}

int main()
{
  char str[100];

  int length;

  while(NULL !=gets(str))
  {
    length=str_length(str);
    printf("%d\n",length);
  }

  return 0;
}
