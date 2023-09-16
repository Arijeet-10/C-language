#include<stdio.h>
int main(){
    int n ,d;
    printf("Enter a number");
    scanf("%d",&n );
    d=n%10;
    n=(n/10)*10+2*d;
    printf("Sum of number is %d",n);
    return 0;
}
