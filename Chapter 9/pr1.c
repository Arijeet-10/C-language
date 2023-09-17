#include<stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1,v2,sum;
    v1.x=4;
    v1.y=5;
    v2.x=7;
    v2.y=10;
    
    printf("X dim is %d Y dim is %d\n",v1.x,v1.y);
    printf("X dim is %d Y dim is %d\n",v2.x,v2.y);

    return 0;
}