//program to calculate gross salary where gross salary =BASIC SALARY + DA + HRA + TA
/* DA = 40 % OF BASIC SALARY (DEARNESS EXPENSES)
   HRA = 20 % OF BASIC SALARY (HOUSING EXPENSES)
   TA = 10  % OF BASIC SALARY (TRAVEL EXPENSES) */
#include<stdio.h>
void main()
{
    float BS,DA,HRA,TA,GS;
    printf("ENTER THE BASIC SALARY : ");
    scanf("%f",&BS);
    DA=(40.00/100.00)*BS;
    HRA=(20.00/100.00)*BS;
    TA=(10.00/100.00)*BS;
    GS=BS+DA+HRA+TA;
    printf("GROSS SALARY : %f",GS);
    getch();
};
