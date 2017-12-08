// fahrenheit to celsius converter
#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter the temperature in fahrenheit scale : \n");
    scanf("%f",&f);
    c=(5/9)*(f-32);
    printf("IN celsius scale : %f",c);
    getch();

};
