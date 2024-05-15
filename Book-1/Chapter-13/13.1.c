#include<stdio.h>

int main()
{
  int n,b1,b2,x,y;
  char ch;
  int grid[10][10];
  
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        grid[i][j]=1;
    }
  }
  
  printf("Enter number of block cell: ");
  scanf("%d",&n);
  
  printf("enter block cell: ");
  for(int i=0;i<n;i++){
      scanf("%d %d",&b1,&b2);
      grid[b1][b2]=0;
  }
  
  printf("enter current position: ");
  scanf("%d %d",&x,&y);
  
  printf("now command:");
  while(1){
      scanf("%C",&ch);
      if(ch=='S' && grid[x][y]!=0){
          printf("final position is:%d,%d",x,y);
          break;
      }
      else if(ch=='R' && grid[x][y]!=0){
          y++;
      }
      else if(ch=='L' && grid[x][y]!=0){
          y--;
      }
      else if(ch=='D' && grid[x][y]!=0){
          x--;
      }
      else if(ch=='U' && grid[x][y]!=0){
          x++;
      }
  }
  return 0;
}