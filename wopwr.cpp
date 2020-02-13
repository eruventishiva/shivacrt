#include<stdio.h>
int c();
int main()
{
int s;
s = c();
printf("%d",s);	
}
int c()
{
	int a,b,c;
	printf("enter the a,b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}
