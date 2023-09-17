#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int count=1;
    int number,you;
    srand(time(0));
    number=rand()%100+1;
    
    printf("************** NUMBER GUESSING GAME **************\n");

    do
    {
        printf("Guess a Number between 1 to 100: \n");
        scanf("%d",&you);
        if(you>number){
            printf("Lower Number please\n");
        }
        else if (number>you)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Hurrah! you have guessed the number in %d attempts\n",count);
            printf("The Guessed Number was : %d",number);
        }
        
        count++;
    } while (number!=you);
    
    return 0;
}