// QUESTION 1

// #include<stdio.h>

// int avg(int a ,int b, int c);

// int main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     printf("Enter a number: ");
//     scanf("%d",&b);
//     printf("Enter a number: ");
//     scanf("%d",&c);
//     printf("The average of the numbers are %d",avg(a,b,c));

// }

// int avg(int a ,int b, int c){
//     int result;
//     result=(a+b+c)/3;
//     return result;
// }



// QUESTION 2


// #include<stdio.h>

// int temp(int a);

// int main(){
//     int a;
//     printf("Enter the temp in Celcius");
//     scanf("%d",&a);
//     printf("The temp in fahrenhite is %d",temp(a));
//     return 0;
// }

// int temp(int a){
//     int c;
//     c=a*9/5+32;
//     return c;
// }



// QUESTION 3


// #include<stdio.h>
// void star(int n);

// int main(){

//     int n=8;
//     star(n);
//     return 0;

// }

// void star(int n){

//     for (int i = 1; i < n; i=i+2)
//     {
//         for (int j =0; j < i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
// }



// QUESTION 4


// #include<stdio.h>

// int sum(int a);

// int main(){
//     int n;
//     printf("Enter the number of terms ");
//     scanf("%d",&n);
//     printf("The sum is %d",sum(n));
//     return 0;
// }

// int sum(int a){
//     int x;
//     if (a<=1)
//     {
//         return a;
//     }
//     else
//     {
//         x=a+sum(a-1);
//         return x;
//     }
// }


// QUESTION 5

// #include<stdio.h>

// int fib(int a);

// int main(){

//     int a;
//     printf("Enter the number of series");
//     scanf("%d",&a);
//     printf("the result is %d",fib(a));

// }

// int fib(int a){
//     if (a==1)
//     {
//         return 0;
//     }
//     else if (a==2)
//     {
//        return 1;
//     }
//     else{
//         return fib(a-1)+fib(a-2);
//     }
    
    
// }

// #include<stdio.h>
// int main(){
//     int n,prime=0;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if (n==0 || n==1){
//         prime=1;
//     }
//     for (int i = 2; i <=n/2; i++){
//         if (n%i==0){
//             prime=1;
//             break;
//         }
//     }
//     if (prime==1){
//         printf("The number is not prime");
//     }
//     else{
//         printf("The number is prime");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int i,d;
    d=30;
    i=d%100;
    i=i/10;
    printf("%d",i);
    
}