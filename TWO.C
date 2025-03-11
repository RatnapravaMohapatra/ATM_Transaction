# include<stdio.h>
# include<conio.h>
void main()         // void means nothing
{
    int a,b,c;
    float x;
    clrscr();
    printf("Entr first integer ");
    scanf("%d",&a);   // & is called 'address of' operator
    printf("Entr second integer ");
    scanf("%d",&b);
    c=a+b;
    printf("\n Addition Result = %d",c);
    c=a-b;
    printf("\n Subtraction Result = %d",c);
    c=a*b;
    printf("\n Multiplication Result = %d",c);
    x=(float)a/b;
    printf("\n Division Result = %f",x);
    c=a%b;
    printf("\n Remainder  Result = %d",c);
    getch();
}