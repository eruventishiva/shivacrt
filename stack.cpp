#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int stack[5],top;
main()
{
int n;

do{
printf("1 for push\n 2 for pop\n 3 for display\n 4 for exit");
scanf("%d",&n);
switch(n)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
break;

default: printf("wrong choice");

}
  }while(n!=4);

}
void push()
{
int item;
if(top==4)
{
printf("overflow");
return;
}
else
{
printf("enter a number");
scanf("%d",&item);
  top = top+1;
  stack[top]=item;
}
}  
void pop()
{
int item;
if(top==-1)

  {
printf("stack is empty");
return;
}
else
{
item=stack[top];
printf("deleted no as %d",item);
top=top-1;

}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");
return;
}
else
{
for(i=top;i>0;i--)
{
printf("%d",stack[i]);
    }

}
}

