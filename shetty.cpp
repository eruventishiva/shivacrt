#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
int ele;
void insert();
void delet();
void display();
void search();
void insertbeg();
void delbeg();
void insertrandom();
void deleterandom();
int main()
{
int ch;
do
{
printf("\n 1.insert");
printf("\n 2.display");
printf("\n 3.delete");
printf("\n 4.exit");
printf("\n 5.search");
printf("\n 6.insertatbeg");
printf("\n 7.delatbeg");
printf("\n 8.insertrandom");
printf("\n 9.deleterandom");
printf("enter the user choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
display();
break;
case 3:
delet();
break;
case 4:
exit(0);
break;
case 5:
search();
break;
case 6:
insertbeg();
break;
case 7:
delbeg();
break;
case 8:
insertrandom();
break;
case 9:
deleterandom();
break;
}
}while(ch!=4);
return 0;
}
void insert()
{
struct node *ptr,*tmp;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n overflow of list");
}
else
{
printf("enter the data");
scanf("%d",&ele);
ptr->data=ele;
if(head==NULL)
{
ptr->next=NULL;
head=ptr;
printf("\n node is inserted");
}
else
{
tmp=head;
while(tmp->next!=NULL)
{
tmp=tmp->next;
}
tmp->next=ptr;
ptr->next=NULL;
printf("\n code is inserted");
}
}
}
void display()
{
struct node *temp;
temp=head;
if(temp==NULL)
{
printf("\n list is empty");
}
else
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
void delet()
{
struct node *ptr,*ptr1;
 
  if(head==NULL)
  {
  printf("\nlist is empty");
  }
  else if(head->next==NULL)
  {
    head=NULL;
    free(head);
    printf("\n node is deleted");
  }
  else
  {
  ptr=head;
  while(ptr->next!=NULL)
  {
    ptr1=ptr;
    ptr=ptr->next;
  }
  ptr1->next=NULL;
  free(ptr);
      printf("\n node is deleted");
}
}
void search()
{
struct node *tmp;
int i=0,key,flag=0;
tmp=head;
if(head=NULL)
printf("\n list is empty");
else
{
printf("enter the searching element");	
scanf("%d",&key);
while(tmp!=NULL)
{
i++;
if(tmp->data==key)
{
printf("%d is found at %d loaction",key,i);
flag=1;
break;
}
tmp=tmp->next;
}
if(flag==0)
printf("%d is not found",key);
}
}
void insertbeg()
{
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)	
{
printf("\n list is overflow");
}
else
{
printf("enter the data");
scanf("%d",&ele);
ptr->data=ele;
ptr->next=head;
head=ptr;
printf("\n node is inserted at beginning");
}
}
void delbeg()
{
struct node *ptr;
if(head==NULL)
{
printf("\n list is empty");
}
else
{
ptr=head;
head=ptr->next;
free(ptr);
printf("\n first node is deleted");
}	
}
void insertrandom()
{
int i,loc,item;
struct node *ptr, *temp;
ptr=(struct node *)malloc (sizeof(struct node));
if(ptr==NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\n enter element value");
scanf("%d",&item);
ptr->data=item;
printf("\enter the loaction after which you want to insert");
scanf("\n%d",&loc);
temp=head;
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
	printf("\n can't insert\n");
	return;
}
}
ptr->next=temp->next;
temp->next=ptr;
printf("\n node inserted");
}
}
void deleterandom()
{
struct node *ptr,*ptr1;
int loc,i;
printf("\n enter the location of the node after which you want to perform deletion \n");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
{
ptr1=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("\n can't delete");
return;
}
}
ptr1->next=ptr->next;
free(ptr);
printf("\n deleted node %d",loc+1);	
}



