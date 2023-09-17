#include<stdio.h>
#include<string.h>

typedef struct bankac
{
    int acno;
    char name[10];
    float amnt;
    int year;
}bank;


int main()
{
    bank cust[5];
    
    cust[1].acno=1001;
    strcpy(cust[1].name,"Arijeet");
    cust[1].amnt=95071;
    cust[1].year=2018;
    
    printf("Account Number: %d\n",cust[1].acno);
    printf("Account Holder Name: %s\n",cust[1].name);
    printf("Bank Balance: %.2f\n",cust[1].amnt);
    printf("Opening Year: %d\n",cust[1].year);

    return 0;
}