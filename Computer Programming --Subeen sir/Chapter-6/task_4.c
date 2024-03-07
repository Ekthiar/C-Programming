
#include<stdio.h>

int main()
{
    int ft_marks[40];
    int st_marks[40];
    int final_marks[40];
    int i;

    for(i=0;i<40;i++){
        printf("first test mark of roll-%d: ",i+1);
        scanf("%d",&ft_marks[i]);
    }
    for(i=0;i<40;i++){
        printf("second test mark of roll: %d",i+1);
        scanf("%d",&st_marks[i]);
    }
    for(i=0;i<40;i++){
        printf("final test mark of roll: %d",i+1);
        scanf("%d",&final_marks[i]);
    }
    double total_marks[40];

    for(i=0;i<40;i++){
        total_marks[i]= ft_marks[i]/4.0 + st_marks[i]/4.0 + final_marks[i]/2.0;
    }

    for(i=1;i<=40;i++){
        printf("Roll No: %d\t Total marks:%0.0lf\n",i,total_marks[i-1]);
    }
    printf("\n");


    return 0;
}
