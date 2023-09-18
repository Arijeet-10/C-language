#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("File.txt","r");
    fscanf(ptr,"%d",&num);
    int res=2*num;
    fprintf(ptr,"%d",res);
    return 0;
}