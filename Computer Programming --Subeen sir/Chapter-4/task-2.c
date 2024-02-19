#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int m;

    for(int i=0;i<n;i++){
        scanf("%d",&m);

        for(int j=10;j<=m;j++){
            if(j%11==0){
                continue;
            }
            printf("%d\n",j);
        }
    }
    return 0;
}
