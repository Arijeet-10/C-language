#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    // ptr=fopen("Harry.txt","r");
    ptr=fopen("file.txt","r");
    
    if (ptr==NULL)
    {
        printf("The file does not exist");
    }
    
    else{
        fscanf(ptr,"%d",&num);
        fclose(ptr);
        printf("The value of num is %d",num);
    }
    fclose(ptr);
    
    return 0;
}