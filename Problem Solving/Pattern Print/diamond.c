/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int s=n-1;
  int k=n-s;
  
  for(int i=1;i<=(n*2)-1;i++){
    for(int j=1;j<=s;j++){
      printf(" ");
    }
    for(int j=1;j<=k;j++){
      printf("*");
    }
    printf("\n");
    if(i<n){
      s--;
      k=k+2;
    }
    else if(i>=n){
      s++;
      k=k-2;
    }
  }
 
  return 0;
}
