#include<stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
}date;

void display(date d){
    printf("%d/%d/%d\n",d.day,d.month,d.year);
}

int datecmp(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    return 0;
}

int main()
{
    date d1={05,11,2005};
    date d2={26,07,2004};
    display(d1);
    display(d2);

    printf("The date comparison function returns: %d",datecmp(d1,d2));
    return 0;
}