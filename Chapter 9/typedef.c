#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;

void show(emp emo){
    printf("The code of employee is: %d\n",emo.code);
    printf("The salary of employee is: %f\n",emo.salary);
    printf("The name of employee is: %s\n",emo.name);
}

int main()
{
    emp e1;
    emp *ptr;
    
    ptr=&e1;
    
    ptr->code=100;
    ptr->salary=24.35;
    strcpy(ptr->name,"Arijeet");
    
    show(e1);
    
    return 0;
}