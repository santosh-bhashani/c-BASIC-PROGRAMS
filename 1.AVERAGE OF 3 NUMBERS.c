#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float avg;
printf("ENTER THE THREE NUMBERS YOU WANT TO FIND THE AVERAGE OF : ");
scanf("%d %d %d",&a,&b,&c);
avg=(a+b+c)/3;
printf("average of the three numbers : %f",avg);
getch(); 
}
