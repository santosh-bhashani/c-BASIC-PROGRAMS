//program to find area and perimeter of a circle
#include<stdio.h>
#define PI 3.14   //defining as a global variable
void main()
{
    int r;
    float area,per;
    printf("ENTER THE RADIUS OF THE CIRCLE : ");
    scanf("%d",r);
    area=PI*r*r;
    per=2*PI*r;
    printf("area : %f perimeter : %f ",area,per);
    getch();

}
