// fahrenheit to celsius converter
#include<stdio.h>
#include<conio.h>
void main()
{   
	int a;
	float f,c;
	printf("CHOOSE THE CONVERSION YOU WANT TO PERFORM - \n1. farenheit to celsius \n2. celsius to farenheit \n");
	scanf("%d",&a);
	if(a==1)
	{
	
    printf("Enter the temperature in fahrenheit scale : \n");
    scanf("%f",&f);
    c=(5.00/9.00)*(f-32.00);
    printf("IN celsius scale : %f",c);
	}
	else if(a==2)
	{printf("Enter the temperature in celsius scale : \n");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("IN farenheit scale : %f",f);
	}
	else
		printf("invaid option");
    getch();

};
