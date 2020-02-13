#include<stdio.h>
void c(int);
int main()
{
int a;
printf("enter a value");
scanf("%d",&a);
c(a);	
}
void c(int r)
{
	float c;
	c=3.14*r*r;
	printf("sumis=%f",c);
}
