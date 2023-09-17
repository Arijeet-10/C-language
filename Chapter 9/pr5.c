#include<stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;


int main()
{
    comp cnum[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d: ",i+1);
        scanf("%d",&cnum[i].real);
        printf("Enter the imaginary value for %d: ",i+1);
        scanf("%d",&cnum[i].imaginary);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The real value for %d: %d\n",i+1,cnum[i].real);
        printf("The imaginary value for %d: %d\n",i+1,cnum[i].imaginary);
        
    }
    

    return 0;
}