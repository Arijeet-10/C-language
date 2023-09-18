#include<stdio.h>
int main()
{
    FILE *ptr,*ptr2;
    ptr=fopen("File.txt","r");
    ptr2=fopen("File2.txt","w");
    char c=fgetc(ptr);
    while (c!=EOF)
    {
        fputc(c,ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr);
    }
    
    return 0;
}