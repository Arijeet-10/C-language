#include<stdio.h>

// USING FOR LOOP

// int main(){
    // int n ,sum=0;
    // printf("Enter a number");
    // scanf("%d",&n);
    // for (int i = 1; i < n+1; i++)
    // {
    //     sum=sum+i;
    // }
    // printf("%d",sum);
    // return 0 ;
// }

// USING WHILE LOOP

int main(){
    int n,i ,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    while (i<n+1)
    {
        sum=sum+i;
        i++;
    }
    
    printf("%d",sum);
    return 0 ;
}

