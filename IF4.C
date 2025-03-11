/* Input three integers and display which one is greatest  */

# include<stdio.h>
# include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter three integers :  ");
   scanf("%d %d %d",&a,&b,&c);

   if(a>b)
   {
       if(a>c)
       {
	  printf("\n %d  is greatest",a);
       }
       else
       {
	   printf("\n %d  is greatest",c);
       }
   }
   else if(b>c)
   {
	printf("\n %d is greatet",b);
   }
   else
   {
      printf("\n %d is greatest",c);
   }
   getch();

}