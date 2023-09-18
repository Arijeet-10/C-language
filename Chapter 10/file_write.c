#include<stdio.h>
int main()
{
    FILE *ptr;
    int num=69;
    ptr=fopen("Generate.txt","w");
    fprintf(ptr,"The value of the num is %d",num);
    fclose(ptr);
    return 0;
}