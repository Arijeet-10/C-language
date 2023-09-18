#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("File.txt","r");
    
    fclose(ptr);
    
    
    return 0;
}