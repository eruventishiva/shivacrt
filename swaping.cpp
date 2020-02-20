#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[100],i,n,j,t,k,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	{
		min=i;
		for(j=i+1;j<n/2;j++)
		{
			if(a[j]<a[min])
			
				min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
		for(i=n/2;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[min])
			
				min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
		printf("\n  after pass %d\n",i+1);
		for(k=0;k<n;k++)
		printf("%d",a[k]);
		
	}
}
