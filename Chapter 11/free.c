#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1, *ptr2;
    ptr1=(int*)malloc(600*sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr1=(int*)malloc(6000*sizeof(int));
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr1[i]);
        free(ptr2);
    }
    
    return 0;
}