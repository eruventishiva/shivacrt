#include<stdio.h>
int main()
{
	int a[5],i,n,f=0,pos;
	printf("enter the array element");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			f=1;
			pos=i;
			break;
		}
	}
	if(f==0)
	{
		printf("number not found");
	}
	else
	{
		for(i=pos;i<=4;i++)
		{
			a[i]=a[i+1];
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
