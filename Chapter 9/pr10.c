#include<stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
}time;

void display(time d){
    printf("%d:%d:%d\n",d.hour,d.minute,d.second);
}

int timecmp(time t1,time t2){
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    return 0;
}

int main()
{
    time t1={05,11,20};
    time t2={22,30,12};
    display(t1);
    display(t2);

    printf("The time comparison function returns: %d",timecmp(t1,t2));
    return 0;
}