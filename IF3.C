/* Input an integer and display whether the input integer is even or odd */

# include<stdio.h>
# include<conio.h>
void main()
{
   int n;
   clrscr();
   printf("Enter an integer ");
   scanf("%d",&n);
   if(n%2==0)
   {
       printf("\n %d is even",n);
   }
   else
   {
      printf("\n %d is odd",n);
   }
   getch();

}