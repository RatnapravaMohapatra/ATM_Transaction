#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=1;i<=4;i++)
{
for(j=1;j<=5;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}