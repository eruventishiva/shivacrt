#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main
	{
	int a[5],f = -1,r = -1,i;
	while(1)
	{
		system("cls");
		printf("\n queue opeartions :");
		printf("\n1.insert");
		printf("\n2.remove");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\n enter your choice");
		scanf("%d",&x);
		switch(x);
{
	case 1: if(r<4)
	{
		r++;
		if(r==0){
		
		f=0;}
	}
		printf("\n enter the value: ");
		scanf("%d",&a[r]);
		printf("\n value is inserted");
		getch();
}
else
{
	printf("\nqueue is full");
	getch();
}
break;
case 2:if(f!==-1&&r!=-1)
{
 if(r == 0 && f == 0)
 {
 	a[f]=0;
 	r--;
 	f--;
 	printf("\n queue is removed");
	 }
	 else{
	 	for(i=f+1;i<=r;i++)
	 	{
	 		if(i==r)
	 		{
	 			a[i-1]=a[i];
	 			r--;
			 }
			 else{
			 	a[i-1]=a[i];
			 }
		 }
		 printf("\n value isremoved");
	 }	
}
else
{
	printf("\n queue is empty");
	getch();
}
	break;
	case 3:if(f!= -1 && r!=-1)
	{
		printf("\nqueue values are :");
		printf("\n ------------\n");
		for(i=f;i<=r;i++)
		{
		printf("%d",a[i]);
		}
		getch();
	}
	else
	{
		printf("\n queue isempty");
		getch();
	}
	break;
case 4:printf("\n progrmais terminating"):
	return 0;
	break;
