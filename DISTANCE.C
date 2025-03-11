/* Input the distance of two roads in feet and inches. Find the total
   distance of both roads in yard, feet and inches */

   # include<stdio.h>
   # include<conio.h>
   void main()
   {
       int f1,in1,f2,in2,yard,feet,inches;
       clrscr();
       printf("Enter distance of Road-1 in feet : ");
       scanf("%d",&f1);
       printf("Enter distance of Road-1 in inches : ");
       scanf("%d",&in1);
       printf("Enter distance of Road-2 in feet : ");
       scanf("%d",&f2);
       printf("Enter distance of Road-2 in inches : ");
       scanf("%d",&in2);
       feet=f1+f2+((in1+in2)/12);
       inches=((in1+in2)%12);
       yard=feet/3;
       feet=feet%3;
       printf("\n Yard = %d \n Feet = %d\n Inches = %d",yard,feet,inches);
       getch();
   }