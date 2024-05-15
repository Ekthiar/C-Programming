#include<stdio.h>
#include<limits.h>

int main()
{
  int ara[]={3,1,5,2,4};
  int min_index;
  
  for(int i=0;i<5;i++){
    int min=INT_MAX;
    for(int j=i;j<5;j++){
      if(ara[j]<min){
        min=ara[j];  
        min_index=j;
      }
    }
    int temp=ara[i];
    ara[i]=ara[min_index];
    ara[min_index]=temp;
  }
  
  for(int i=0;i<5;i++){
    printf("%d ",ara[i]);
  }
  
  return 0;
  
}