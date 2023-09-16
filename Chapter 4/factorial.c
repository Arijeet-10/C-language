#include<stdio.h>

// USING FOR LOOP

// int main(){
//     int n , fact=1;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for (int i = n; i > 0; i--)
//     {
//        fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// USING WHILE LOOP

int main(){
    int n ,i=1, fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    while (i<n+1)
    {
        fact=fact*i;
        i++;
    }
    
    printf("%d",fact);
    return 0;
}