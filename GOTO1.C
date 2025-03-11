/* goto labelname; */

# include<stdio.h>
# include<conio.h>
void main()
{
    int a=0;
    clrscr();
x:  a++;      // x is called label
    printf("%5d",a);
    if(a<10)
       goto x;

    getch();

}