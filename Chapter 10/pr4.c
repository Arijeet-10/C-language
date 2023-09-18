#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Employee.txt","w");
   
    char name1[10],name2[10];
    int salary1=7700,salary2=5500;
    
    strcpy(name1,"Arijeet");
    strcpy(name2,"Rohan");
   
    fprintf(ptr,"%s , %d\n",name1,salary1);
    fprintf(ptr,"%s , %d\n",name2,salary2);
    fclose(ptr);
    return 0;
}