#include<stdio.h>
int main()
{
    float cel;
    printf("Enter the temperture in celcius \n");
    scanf("%f",&cel);
    float fah=cel*1.8+32;
    printf("the temperature in fahrenhite is %.2f",fah);
    return 0;
}