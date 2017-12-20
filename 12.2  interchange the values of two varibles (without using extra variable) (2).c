//interchanging values of two variables (without extra variable)
#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    printf("ENTER THE VALUE OF a and b \n");
    scanf("%d %d",&a,&b);
    printf("a:%d b:%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" after interchaging > a:%d b:%d",a,b);
    getch();
}
