//interchange the values of two variables
#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("ENTER THE VALUE OF a and b \n");
    scanf("%d %d",&a,&b);
    printf("a:%d b:%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a:%d b:%d \n",a,b);
    getch();
}
