#include<stdio.h>
#include<conio.h>
void main()
{
int f1,f2,in1,in2,yard,feet,inches;
clrscr();
printf("Enter the length of the road-1 in feet");
scanf("%d",&f1);
printf("Enter the length of the road-1 in inches");
scanf("%d",&in1);
printf("Entet the length of the road-2 in feet");
scanf("%d",&f2);
printf("Enter the length of the road-2 in inches");
scanf("%d",&in2);
feet=f1+f2+((in1+in2)/12);
inches=in1+in2;
yard=feet/3;
feet=feet%3;
printf("\n yard=%d",yard);
printf("\n inches=%d",inches);
printf("\n feet=%d",feet);
getch();
}