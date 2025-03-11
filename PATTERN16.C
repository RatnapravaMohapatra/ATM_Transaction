# include<stdio.h>
# include<conio.h>
void main()
{
    char p,i,j;
    clrscr();
    printf("Entr an upper case character : ");
    scanf("%c",&p);
    for(i='A';i<=p;i++)
    {
	for(j='A';j<=i;j++)
	{
	    printf("%2c",j);
	}
	printf("\n\n");
    }
   getch();
}