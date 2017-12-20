// to find total marks and percentage
#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,total;
	float perc;
	printf("ENTER THE MARKS OF SUBJECTS ONE BY ONE  ");
	scanf(" %d \n %d \n %d \n %d \n %d  ",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	perc=(float)total/7.00; //using type casting
	printf("TOTAL MARKS : %d \n percentage = %f",total,perc);
	getch();
	
	
}
