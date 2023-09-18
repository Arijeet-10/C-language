#include<stdio.h>
int main()
{
    FILE *ptr;
    int num1,num2,num3;
    ptr=fopen("File.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    printf("The value of num1 is: %d\n",num1);
    printf("The value of num2 is: %d\n",num2);
    printf("The value of num3 is: %d\n",num3);
    return 0;
}