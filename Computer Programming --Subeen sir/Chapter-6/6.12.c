#include<stdio.h>
int main()
{
    int marks,i,count;
    int total_marks[]={86,78,94,69,92,78,64,62,72,61,72,66,65,65,80,72,62,68,81,62,56,68,58,56,82,71,74,78,76,84,88,73,63,66,77,71,67,65,79,62};
    int marks_count[101];

    for(marks=50;marks<=100;marks++){
        count=0;
        for(i=0;i<40;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        printf("Marks: %d count: %d\n",marks,count);
    }
    return 0;
}
