// to find the area and perimeter of a circle
#include<stdio.h>
#include<conio.h>
# define PI 3.14
void main()
{
	float r,area,peri;
	printf("enter the length of the radius of the circle : ");
	scanf("%f",&r);
	area=PI*r*r;
	peri=2*PI*r;
	printf("AREA : %f \n PERIMETER : %f",area,peri);
	getch();
}
