#include<stdio.h>
void c();
int main()
{
c();	
}
void c()
{
	float b,h,c;
	printf("enter the b,h values");
	scanf("%f%f",&b,&h);
	c=0.5*b*h;
	printf("sumis=%f",c);
}
