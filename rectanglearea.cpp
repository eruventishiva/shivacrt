#include<stdio.h>
int c(int,int);
int main()
{
int a,b,s;
printf("enter a,b values");
scanf("%d%d",&a,&b);
s=c(a,b);
printf("%d",s);	
}
int c(int l,int w)
{
	int c;
	c=l*w;
	return(c);
}
