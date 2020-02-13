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
	int b1,b2,c;
	printf("enter the b1,b2 values");
	scanf("%d%d",&b1,&b2);
	c=b1*b2;
	return(c);
}
