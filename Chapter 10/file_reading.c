#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("File.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("The value of num is %d",num);
    return 0;
}