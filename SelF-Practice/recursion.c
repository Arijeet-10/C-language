// Factorial of a number
// #include<stdio.h>
// int factorial(int n);
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     printf("The factorial is %d",factorial(n));
// }
// int factorial(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }

// Fibonacci series
// #include<stdio.h>
// int fib(int n);
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     printf("%d",fib(n));
// }
// int fib(int n){
    // if (n==0)
    // {
    //     return 0;
    // }
    // else if (n==1)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return fib(n-1)+fib(n-2);
    // }   
// }

// Ackerman recursion
// #include<stdio.h>
// int ack(int m,int n);
// int main(){
//     int m,n;
//     printf("Enter m and n: ");
//     scanf("%d",&m);;
//     scanf("%d",&n);
//     printf("%d",ack(m,n));
// }
// int ack(int m,int n){
//     if (m==0)
//     {
//         return n+1;
//     }
//     else if (n==0)
//     {
//         return ack(m-1,1);
//     }
//     else
//     {
//         return ack(m-1,ack(m,n-1));
//     }    
// }

// Bubble Sort
// #include<stdio.h>
// int main(){
//     int a[5];
//     int n,temp;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the element: ");
//         scanf("%d",&a[i]);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n-1; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }    
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;   
// }

//patterns
// #include<stdio.h>
// int main(){
//     for (int i = 5; i>=1; i--)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");   
//     }
// }

// Selection sort
// #include<stdio.h>
// int main(){
//     int a[50],temp,n;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//         {
//             printf("%d ",a[i]);
//         }
// }

// count the digits of a number
// #include<stdio.h>
// int main(){
//     int n,count=0;
//     printf("Enter a number");
//     scanf("%d",&n);
//     while (n!=0)
//     {
//         n=n/10;
//         count+=1;
//     }
//     printf("The number of digits are %d",count);
// }

// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,0,6,7,1,8,8};
//     int size;
//     size=sizeof(a)/sizeof(a[0]);
//     printf("Size is %d",size);
// }

//Add 10 array elements
// #include<stdio.h>
// int main(){
//     int a[10];
//     int sum=0;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the element: ");
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("The sum of the element is %d",sum);
// }

// Add 2d matrix
// #include<stdio.h>
// int main(){
//     int x,y,sum=0;
//     int a[100][100];
//     printf("Enter the number of rows: ");
//     scanf("%d",&x);
//     printf("Enter the number of coloums: ");
//     scanf("%d",&y);
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             sum=sum+a[i][j];
//         }
//     }
//     printf("The sum is %d",sum);
// }

// string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[10];
//     printf("Enter your name");
//     gets(str);
//     printf("%s",str);
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[10];
//     printf("Enter your name");
//     gets(str);
//     printf("%d",strlen(str));
// }
// #include<string.h>
// #include<stdio.h>
// int main(){
//     char str1[10],str2[10];
//     printf("Enter 2 strings");
//     gets(str1);
//     gets(str2);
//     if (strcmp(str1,str2)==0)
//     {
//         printf("The strings are same");
//     }
//     else
//     {
//         printf("They are not same");
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[10],n,temp;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the element: ");
//         scanf("%d",&a[i]);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n-1; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

#include<stdio.h>
int main(){
    FILE *p;
    p=fopen("write.txt","a");
    fprintf(p,"pop");
    fclose(p);
}





