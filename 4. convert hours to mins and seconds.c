//program to convert hours to minutes and seconds
#include<stdio.h>
#include<conio.h>
void main()
{
    int hr,min,sec;
    printf("ENTER THE TIME IN HOUR : ");
    scanf("%d",&hr);
    min=60*hr;
    sec=60*min;
    printf("In minutes :  %d In seconds : %d",min,sec);
    getch();
};
