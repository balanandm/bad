#include<stdio.h>
#include<conio.h>
void main()
{
int base,exponent;
long long result=1;
printf(" enter a base num:");
scanf("%d",&base);
printf("enter a exponent:");
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%d",result);
getch();
}
