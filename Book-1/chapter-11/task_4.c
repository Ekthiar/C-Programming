#include<stdio.h>

int main()
{
    int ara1[5][5]={{6,3,8,2,4},{4,7,6,4,1},{7,1,4,2,6},{8,9,2,5,7},{9,9,7,9,3}};
    int ara2[5][5];

    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++)
        {
            printf("%d ",ara1[row][col]);
        }
        printf("\n");
    }

    printf("\n\nAfter copy\n\n");

    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            ara2[col][row]=ara1[row][col];        }
    }

     for(int row=0;row<5;row++){
        for(int col=0;col<5;col++)
        {
            printf("%d ",ara2[row][col]);
        }
        printf("\n");
    }


    return 0;
}
