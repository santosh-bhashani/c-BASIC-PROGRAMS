//program to calculate square and cube of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sq,cu;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    sq=n*n;
    cu=sq*n;
    printf("square : %d cube : %d",sq,cu);
    getch();
}
