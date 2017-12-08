//unit convertor
#include<stdio.h>
void main()
{
    int km,m,cm;
    float inch,ft;
    printf("ENTER THE Km VALUE : "); //taking value in km
    scanf("%d",&km);
    m=1000*km;                      //converting
    cm=100*m;
    inch=cm/2.54;
    ft=inch/12;
    printf("meter : %d centimetre : %d inch : %f ft : %f",m,cm,inch,ft); //printing all the values
    getch();
}
