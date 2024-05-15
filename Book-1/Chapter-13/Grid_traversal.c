#include<stdio.h>

int main()
{
    int x,y,n,b1,b2;
    char ch;

    int grid[10][10];
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            grid[i][j]=1;
        }
    }

    printf("enter the number of blocked cells\n:- ");
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        printf("block cell[%d]:- ",i+1);
        scanf("%d,%d",&b1,&b2);
        grid[b1][b2]=0;
    }

    printf("enter current position\n:- ");
    scanf("%d,%d",&x,&y);

    printf("give commant\n:- ");

    while(1){
        scanf("%c",&ch);
        
        if(ch=='S'){
            printf("final position is:(%d,%d)",x,y);
            break;
        }
        else if(ch=='U' && grid[x-1][y]!=0){
            x--;
        }
        else if(ch=='D' && grid[x+1][y]!=0){
            x++;
        }
        else if(ch=='R' && grid[x][y+1]!=0){
            y++;
        }
        else if(ch=='L' && grid[x][y-1]!=0){
            y--;
        }
    }
    return 0;
}