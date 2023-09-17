#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int gameResult(char comp,char you)
{
    if (comp==you)
    {
        return 0;
    }
    
    if (comp=='s' && you=='w')
    {
        return -1;
    }
    else if (comp=='w' && you=='s')
    {
        return 1;
    }
    if (comp=='g' && you=='s')
    {
        return -1;
    }
    else if (comp=='s' && you=='g')
    {
        return 1;
    }
    if (comp=='w' && you=='g')
    {
        return -1;
    }
    else if (comp=='g' && you=='w')
    {
        return 1;
    }
    
    
}

int main()
{
    int num;
    char comp,you;

    srand(time(0));
    num=rand()%100+1;

    if (num<33)
    {
        comp='s';
    }
    else if(num>34 && num<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("*************** SNAKE WATER GUN ***************\n");
    printf("Enter: \t's' for snake \t 'w' for water \t 'g' for gun:\n");

    scanf("%c",&you);
    
    int result =gameResult(comp,you);

    printf("Comp chose: %c\n You chose: %c\n",comp,you);

    if (result==0)
    {
        printf("The Game is Draw! \n");
    }
    else if (result==1)
    {
        printf("You have won the game!");
    }
    else if (result==-1)
    {
        printf("You have lost the game!");
    }
    
    return 0;
}