/* Q. Input two integers in two variables A and B and display their
       swapping result without using third variable .
*/

# include<stdio.h>
# include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("\n Enter value in A : ");
    scanf("%d",&a);                    // & -> Ampersand
    printf("\n Enter value in B : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n A = %d",a);
    printf("\n B = %d",b);
    getch();
}
