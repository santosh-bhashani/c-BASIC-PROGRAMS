//program to find the sum,difference,product,division,mod
#include<stdio.h>
#include<conio.h>


void main()
{
    int a,b,sum,dif,prod,mod; //defining the variables
	float div;
    printf("ENTER THE TWO NUMBERS YOU WANT TO perform the operations on : \n");
    scanf("%d %d",&a,&b); //taking input of two numbers
    sum=a+b; //adding the numbers
    dif=a-b;
    prod=a*b;
    div=(float)a/(float)b; //using type casting
    mod=a%b;
    printf("sum = %d \n difference = %d \n product = %d \n division = %f \n mod = %d",sum,dif,prod,div,mod); 
    getch();
};
