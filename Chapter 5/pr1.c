#include<stdio.h>
int avg(int a,int b,int c);
int main(){
    int a,b,c;
    a=4;
    b=6;
    c=5;
    printf("The average of the numbers are %d",avg(a,b,c));
}
int avg(int a,int b,int c){
    int avg=(a+b+c)/2;
    return avg;
}
