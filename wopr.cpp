#include<stdio.h>
void c();
int main()
{
c();	
}
void c()
{
	int a,b,c;
	printf("enter the a,b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sumis=%d",c);
}
