#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("enter array element");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(j=0;j<5;j++)
	{
	if(a[j]%2==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
	return 0;
}
