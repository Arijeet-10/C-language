#include<stdio.h>
int main(){
    int n,sum=0 ;
    printf("Enter a number");
    scanf("%d",&n);
    for ( int i = 1; i < 11; i++)
    {
        sum=sum+n*i;
    }
    printf("%d",sum);
    return 0;   
}
