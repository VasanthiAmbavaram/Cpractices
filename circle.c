#include<stdio.h>

//Area and circumference of a circle

int main()
{
    //Declare Input
    int radius;
    float PI=3.141;
    float area,circumference;

    //Read input from user
    printf("Enter the radius=");
    scanf("%d",&radius);

    //Calculating area and circumference
    area=PI*radius*radius;
    circumference=2*PI*radius;

    //Printing result
    printf("area=%f\n",area);
    printf("circumference=%f",circumference);

    return 0;
}