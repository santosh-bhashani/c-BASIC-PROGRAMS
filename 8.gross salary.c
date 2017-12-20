//program to calculate gross salary where gross salary =BASIC SALARY + DA + HRA + TA
/* DA = 40 % OF BASIC SALARY (DEARNESS EXPENSES)
   HRA = 20 % OF BASIC SALARY (HOUSING EXPENSES)
   TA = 10  % OF BASIC SALARY (TRAVEL EXPENSES) */
#include<stdio.h>
#include<conio.h>
void main()
{
    float BS,DA,HRA,GS;
    printf("ENTER THE BASIC SALARY : ");
    scanf("%f",&BS);
    DA=(40.00/100.00)*BS;
    HRA=(20.00/100.00)*BS;
    
    GS=BS+DA+HRA;
    printf("GROSS SALARY : %f",GS);
    getch();
};
