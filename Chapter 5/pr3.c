#include<stdio.h>
int sum(int n);

int main(){
    int n=3;
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    while (n>0)
    {
        return n+sum(n-1);
    }
}