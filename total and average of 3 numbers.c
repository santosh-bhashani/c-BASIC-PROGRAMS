//program to find the sum and avg of 3 numbers
#include<stdio.h>
void main()
{
    int a,b,c; //defining variables to be used
    int sum;
    float avg; //making average of float data type because it can be in decimal
    printf("ENTER THE THREE NUMBERS YOU WANT TO ADD : \n");
    scanf("%d %d %d",&a,&b,&c); //taking input
    sum=a+b+c; //adding the numbers
    avg=sum/3.00; //finding the average
    printf("sum : %d  average : %f",sum,avg); //printing the sum and average
    getch();

}

