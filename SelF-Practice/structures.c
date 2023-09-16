// #include<stdio.h>
// #include<string.h>
// struct students
// {
//     int id;
//     int marks;
//     char grade;
//     char name[10];
// };


#include<stdio.h>
#include<string.h>
struct students
{
    int id;
    int marks;
    char grade;
    char name[10];
}
pop={1001,450,'A','Arijeet'};
bob={1002,349,'B','Haris'};
int main(){

    printf("%d\n",pop.id);
    printf("%d\n",pop.marks);
    printf("%c\n",pop.grade);
    printf("%s",pop.name);
}