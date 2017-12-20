//program to find area and volume of a cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,area,vol;
	printf("ENTER THE LENGTH OF THE SIDE : ");
	scanf("%d",&a);
	area=6*a*a;
	vol=a*a*a;
	printf("area : %d    \n volume : %d",area,vol );
	getch();
	
}
