 /* Input three sides of a triangle and display whether triangle is possible
    or not. If possible then display whether it is a right angle triangle
    or not  */


   # include<stdio.h>
   # include<conio.h>
   # include<math.h>
   void main()
   {
	int a,b,c,a1,b1,c1,f=0;
	clrscr();
	printf("Enter length of three sides of a triangle : ");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b)>c)
	     if((b+c)>a)
		 if((a+c)>b)
		 {
		     f=1;
		     printf("\n Triagnle is possible ");
		     a1=sqrt((b*b)+(c*c));
		     b1=sqrt((a*a)+(c*c));
		     c1=sqrt((a*a)+(b*b));
		     if(a==a1 || b==b1 || c==c1)
		       printf("\n It is a right angle triangle ");
		     else
		       printf("\n Not a right angle triangle ");
		 }

	if(f==0)
	    printf("\n Triangle is not possible ");
	getch();
   }