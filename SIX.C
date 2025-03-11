 // Input and output of integer, character and float type of value

 # include<stdio.h>
 # include<conio.h>
 void main()
 {
     int a;
     char b;
    float c;
    clrscr();
    printf("Enter an integer, character and a fraction value : ");
    scanf("%d %c %f",&a,&b,&c);
    printf("\n Integer value = %d",a);
    printf("\n Character value = %c",b);
    printf("\n Fraction value = %f",c);
    getch();

 }