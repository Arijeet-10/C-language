// #include<stdio.h>
// int main(){
//     int arr[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j< 3; j++)
//         {
//             printf("Enter element:");
//             scanf("%d",&arr[i][j]);
//         }   
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("The %d,%d element is: %d\n",i,j,arr[i][j]);
//         }
//     }
    // return 0;
// }


// #include<stdio.h>
// int main(){
//     int tab[10];
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for (int i = 0; i < 10; i++)
//     {
//         tab[i]=n*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("5 X %d = %d\n",i+1,tab[i]);
//     }
//     return 0;    
// }


// #include<stdio.h>
// int main(){
//     int tab[3][10];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j<10 ; j++)
//         {
//             if (i==0)
//             {
//                 tab[i][j]=2*(j+1);
//             }
//             else if (i==1)
//             {
//                 tab[i][j]=7*(j+1);
//             }
//             else
//             {
//                 tab[i][j]=9*(j+1);
//             }    
//         } 
//     }
//     for (int i = 0; i < 3; i++){
//             for (int j = 0; j < 10; j++){
//                 printf("%d ",tab[i][j]);
//             }  
//                 printf("\n");      
//         }
//     return 0;
    
// }


// #include<stdio.h>

// void goodMorning();
// void goodAfternoon();
// void goodNight();


// int main(){
//     goodMorning();
//     goodAfternoon();
//     goodNight();
// }


// void goodMorning(){
//     printf("Good Morning\n");
// }
// void goodAfternoon(){
//     printf("Good Afternoon\n");
// }
// void goodNight(){
//     printf("Good Night\n");
// }


#include<stdio.h>


int factorial(int x);


int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial(int x){

    if (x==0 || x==1)
    {
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
    

}

