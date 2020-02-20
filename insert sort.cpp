#include<stdio.h>
int main()
{
	int n,a[20],temp,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j=1]=temp;
			}
			else
			break;
		}
		printf("\n after pass %d:",i);
		for(k=0;k<n;k++)
		printf("%d",a[k]);
	}
}
