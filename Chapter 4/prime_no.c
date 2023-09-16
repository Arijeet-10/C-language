#include <stdio.h>
int main()
{
    int n ,prime=1;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i = 2; i <= n ; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }
    if (prime==0)
    {
        printf("The number is not prime number");
    }
    else
    {
        printf("The number is a prime");
    }

    return 0;
    
    
        
    }
    


 
}