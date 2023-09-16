// // #include<stdio.h>
// // int main(){
// //     int a,b,permtr;
// //     printf("Enter the length");
// //     scanf("%d",&a);
// //     printf("Enter the breadth");
// //     scanf("%d",&b);
// //     permtr=2*(a+b);
// //     printf("The perimeter is %d",permtr);

// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number");
// //     scanf("%d",&n);
// //     printf("%d",n*n*n);

// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int a,b,c;
// //     printf("Enter a: ");
// //     scanf("%d",&a);
// //     printf("Enter b: ");
// //     scanf("%d",&b);
// //     printf("Enter c: ");
// //     scanf("%d",&c);
// //     printf("The average is %d",(a+b+c)/2);
// //     return 0;
// // }



// // #include<stdio.h>
// // int main(){
// //     char c;
// //     printf("Enter ");
// //     scanf("%c",&c);
// //     if(c>='0' && c<='9'){
// //         printf("The character is digit");
// //     }
// //     else{
// //         printf("The charchter is not digit");
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int a,b;
// //     printf("Enter a: ");
// //     scanf("%d",&a);
// //     printf("Enter b: ");
// //     scanf("%d",&b);
// //     if(a<b){
// //         printf("The samllest number is %d",a);
// //     }
// //     else{
// //         printf("The samllest number is %d",b);
// //     }


// //     return 0;
// // }


// // #include<stdio.h>
// // int main(){

// //     int a,b,c,d;
// //     printf("Enter a number");
// //     scanf("%d",&a);
// //     b=a%10;
// //     c=(a/10)%10;
// //     d=a/100;
// //     if ((d*d*d+b*b*b+c*c*c)==a)
// //     {
// //         printf("yes");
// //     }
// //     else{
// //         printf("no");
// //     }
    

// // #include<stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     if(n>0){
// //         printf("It is a natural number");
// //     }
// //     else
// //     {
// //         printf("Not a natural number");
// //     }
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
        
// //     }
// //     return 0;
    
// // }


// #include<stdio.h>
// int main(){
//     int n,prime=0;
//     scanf("%d",&n);
//     for (int i = 2; i<=n/2; i++)
//     {
//         if (n%i==0)
//         {
//             prime=1;
//             break;
//         }
//     }
//     if (prime==1)
//     {
//         printf("The number is not prime");
//     }
//     else{
//         printf("The number is prime");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){

//     printf("Enter the number of columns");
//     int i; 
//     scanf("%d", &i);
//     printf("Enter the number of rows");
//     int y; 
//     scanf("%d", &y);

//     int r[i][y];
//     int a;
//     int b;

//         for (a=0; a<i; a++){
//             for (b=0; b<y; b++){
//                 scanf("%d",&r[a][b]);
//         }
//     }
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number ");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The numbers are %d\n", arr[i]);
        
    }
    return 0;
    
}










