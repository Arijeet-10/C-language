#include<stdio.h>
int leng(char str[100]);
int main(){
    char str[100];
    printf("Enter a string: \n");
    scanf("%s",&str);
    printf("The length of the string is %d",leng(str));
    
    return 0;
}

int leng(char str[100]){
    char *ptr=str;
    int count=0;
    while (*ptr!='\0')
    {   
        count=count+1;
        ptr++;
    }
    return count;
}