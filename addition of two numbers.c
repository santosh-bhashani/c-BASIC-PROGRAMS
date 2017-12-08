//program to add two numbers
#include<stdio.h>

void main()
{
    int a,b,sum; //defining the variables
    printf("ENTER THE TWO NUMBERS YOU WANT TO ADD \n");
    scanf("%d %d",&a,&b); //taking input of two numbers
    sum=a+b; //adding the numbers
    printf("sum = %d",sum); //rinting the sum
    getch();
};
