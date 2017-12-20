//simple interest calculator : simple interest =principle + principle*rate*time
#include<stdio.h>
#include<conio.h>
void main()
{
	int princ,rate,time;
	float si;
	printf("ENTER THE PRINCIPAL AMOUNT : ");
	scanf("%d",&princ);
	printf("\n ENTER THE RATE : ");
	scanf("%d",&rate);
	printf("ENTER TIME : ");
	scanf("%d",&time);
	si=princ*(1+rate*time);
	printf("SIMPLE INTERST : %f",si);
	getch();
	
}
