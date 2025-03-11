
# include<stdio.h>
# include<conio.h>
void main()
{
    int km;
    long int cm;
    clrscr();
    printf("Enter distance of road in KM : ");
    scanf("%d",&km);
    cm=km*100000;
    printf("\n %d Km = %ld Cm",km,cm);
    getch();
}