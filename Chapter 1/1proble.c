#include<stdio.h>
int main()
{
    int len , wid;
    printf("Enter the length");
    scanf("%d",&len);
    printf("Enter the breadth");
    scanf("%d",&wid);
    int c=len*wid;
    printf("The area of the rectangle is %d cm square",len*wid);
    return 0;

}