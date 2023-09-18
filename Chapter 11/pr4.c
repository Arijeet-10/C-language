#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The %d element is: %d\n",i+1,ptr[i]);
    }
    printf("\n\nEntering data after reallocating:\n\n");
    ptr=realloc(ptr,10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The %d element is: %d\n",i+1,ptr[i]);
    }
    return 0;
}