#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20;
printf("Before swap a=%d b=%d",a,b);
a=a+b;//a=30(10+20)
b=a-b;//b=10(30-20)
a=a-b;//a=20(30-10)
printf("\n After swap a=%d b=%d",a,b);
getch();
}