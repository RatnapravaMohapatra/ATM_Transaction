# include<stdio.h>
# include<conio.h>
void main()
{
     int n,i,j;
     clrscr();
     printf("Enter an integer ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
	 for(j=1;j<=i;j++)
	 {
	     printf(" ");
	 }

	 for(j=i;j<=n;j++)
	 {
	     printf("* ");
	 }
	 printf("\n");
     }
  getch();
}