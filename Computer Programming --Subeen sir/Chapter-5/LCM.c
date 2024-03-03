#include<stdio.h>
int main()
{
    int num1,num2,gcm;

    scanf("%d%d",&num1,&num2);
    int a=num1;
    int b=num2;
    if(a==0) gcm=b;
    else if(b==0) gcm=a;
    else{
        while(b!=0){
            int t=b;
            b=a%b;
            a=t;
        }
        gcm=a;
    }

    int lcm= num1*num2;

    printf("GCM=%d\nLCM=%d",gcm,lcm);

    return 0;
}
