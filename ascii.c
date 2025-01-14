#include<stdio.h>
//Ascii value of a character

int main()
{
    //Declare Input
    char ch;

    //Reading input from user
    printf("Enter the character=");
    scanf("%c",&ch);

    //Printing the result
    printf("Ascii value of %c=%d\n",ch,ch);
    return 0;
}