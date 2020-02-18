#include<stdio.h>
#include<string.h>
int main()
{
	int len,i;
	char x[100];
	scanf("%s",x);
	len = strlen(x);
	for(i=0;i<len;i++)
	{
		if(x[i]=='a'||x[i]=='e',x[i]=='i',x[i]=='o',x[i]=='u')
		{
			printf("%c",x[i]+1);
		}
		else if(x[i]>='b' && x[i] <= 'd')
		{
			printf("e");
		
		}
		else if(x[i]>='f' && x[i]<='h')
		{
			printf("i");
		
		}
		else if(x[i]>='j' && x[i]<='n')
		{
			printf("o");
		
		}
		else if(x[i]>='p' && x[i]<='t')
		{
			printf("u");
		
		}
		else if(x[i]>='v' && x[i]<='z')
		{
			printf("a");
		
		}
	}
	
return 0;	
}
