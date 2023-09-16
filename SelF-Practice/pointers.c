// #include<stdio.h>
// int main(){
//     int arr[2][3]={{100,101,102},{200,201,202}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; i < 3; j++)
//         {
//             printf("%d\n",arr[i][j]);
//         }
        
//     }

//     return 0;
    
// }

// #include <stdio.h>

// int main() {
//   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

//   int i, j;
//   for (i = 0; i < 2; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\n", matrix[i][j]);
//     }
//   }
  
//   return 0;
// }

#include<stdio.h>
int main(){
    int *pc,c;
    c=5;
    pc=&c;
    printf("%d\n",*pc);
    printf("%d\n",c);
    printf("%p\n",pc);
    printf("%p\n",&c);
}





















