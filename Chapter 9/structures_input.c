#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};


int main()
{
    struct employee e1,e2,e3;
    printf("Enter the code of employee 1: ");
    scanf("%d",&e1.code);
    printf("Enter the salary of employee 1: ");
    scanf("%F",&e1.salary);
    printf("Enter the name of employee 1: ");
    scanf("%s",e1.name);

    printf("Enter the code of employee 2: ");
    scanf("%d",&e2.code);
    printf("Enter the salary of employee 2: ");
    scanf("%F",&e2.salary);
    printf("Enter the name of employee 2: ");
    scanf("%s",e2.name);

    printf("Enter the code of employee 3: ");
    scanf("%d",&e3.code);
    printf("Enter the salary of employee 3: ");
    scanf("%F",&e3.salary);
    printf("Enter the name of employee 3: ");
    scanf("%s",e3.name);


    printf("The Code of Employee 1: %d\n",e1.code);
    printf("The Salary of Employee 1: %.2f\n",e1.salary);
    printf("The Name of Employee 1: %s\n",e1.name);

    printf("The Code of Employee 2: %d\n",e2.code);
    printf("The Salary of Employee 2: %.2f\n",e2.salary);
    printf("The Name of Employee 2: %s\n",e2.name);
    
    printf("The Code of Employee 3: %d\n",e3.code);
    printf("The Salary of Employee 3: %.2f\n",e3.salary);
    printf("The Name of Employee 3: %s\n",e3.name);

    return 0;
}