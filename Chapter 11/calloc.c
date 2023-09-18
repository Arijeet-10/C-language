#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size: \n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements:-\n",n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d element: ",i+1);
    //     scanf("%d",&ptr[i]);    
    // }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is :%d \n",i+1,ptr[i]);
    }
    
    return 0;
}