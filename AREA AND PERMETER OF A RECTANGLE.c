//program to calculate AREA and Perimeter of a rectangle
#include<stdio.h>
void main()
{
    int l,b,area,per;
    printf("ENTER length and breadth OF THE RECTANGLE : ");
    scanf("%d %d",&l,&b);
    area=l*b;
    per=2*(l+b);
    printf("area : %d perimeter : %d",area,per);
    getch();
}
