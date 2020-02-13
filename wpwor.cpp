#include<stdio.h>
void c(int,int);
int main()
{
int a,b;
printf("enter a,b values");
scanf("%d%d",&a,&b);
c(a,b);	
}
void c(int x,int y)
{
	int c;
	c=x+y;
	printf("sumis=%d",c);
}
