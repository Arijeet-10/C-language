#include<stdio.h>
int main()
{
    // hard type inputs
    // int p=10000;
    // int r=10;
    // int t=1;
    // int si=p*r*t/100;
    // printf("The simple interest is %d",si);

    // *User input *// 

    int p,t;
    float r;
    printf("Enter the pricipal ");
    scanf("%d",&p);
    printf("Enter the Rate of interest ");
    scanf("%f",&r);
    printf("Enter the time ");
    scanf("%d",&t);
    float si=(p*r*t)/100;
    printf("The simple interest is %.2f",si);

    return 0;
}