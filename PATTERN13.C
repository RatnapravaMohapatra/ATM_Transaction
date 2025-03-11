#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}