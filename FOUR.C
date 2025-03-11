/* Swapping -> Swapping means the interchange of values between the
   two variables.
   Q. Input two integers in two variables A and B and display their
       swapping result.
*/

# include<stdio.h>
# include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("\n Enter value in A : ");
    scanf("%d",&a);                    // & -> Ampersand
    printf("\n Enter value in B : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n A = %d",a);
    printf("\n B = %d",b);
    getch();
}
