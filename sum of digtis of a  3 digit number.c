//sum of digtis of a  digit number
#include<stdio.h>
void main()
{
    int a,s=0;
    printf("ENTER A 3 DIGIT INTEGER  : ");
    scanf("%d",&a);
    s=s+(a%10);
    a=a/10;
    s=s+(a%10);
    a=a/10;
    s=s+(a%10);
    printf("sum of digits : %d ",s);
    getch();
}
