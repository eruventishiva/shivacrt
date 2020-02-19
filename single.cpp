#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void deletebeg();
void displaybeg();
struct node
{
int info;
struct node *next;
};
struct node *start=NULL;
int main()
{ int c;
do
{
printf("enter 1 for insert\nenter 2 for delete\n enter 3 for display\n");
scanf("%d",&c);
switch(c)
{
case 1:insertbeg();
break;
case 2:deletebeg();
break;
case 3:displaybeg();
break;
default:printf("wrong choice");
}
}while(c!=4);
}
void insertbeg()
{
int item;
struct node *temp;
printf("enter a number");
scanf("%d",&item);
if(start==NULL)
{
start=(struct node*)malloc(sizeof(struct node));
start->info=item;
start->next=NULL;
}

else
{
int item;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=item;
temp->next=start;
start=temp;
}
}
void deletebeg()
{
struct node *dnode;
if(start==NULL)
{
printf("\n linked list is empty\n");
return;
}
else if(start->next==NULL)
{
dnode=start;
start=start->next;
}
printf("\n deleted item is %d:",dnode->info);
free(dnode);
}
void displaybeg()
{
struct node *ptr;
ptr=start;
while(ptr!=NULL)
{
printf("%d",ptr->info);
ptr=ptr->next;
}
}
