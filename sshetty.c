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
int length();
void reverse();
float avg_minmax();
int main()
{
int ch,p;
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
printf("\n 10. length");
printf("\n 11.reverse");
printf("\n 12.average");
printf("\nenter the user choice");
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
case 10:
p=length();
printf("length of the list is:%d",p);
break;
case 11:
reverse();
break;
case 12:
printf("%.2f",avg_minmax());
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
	int l,i=1,c;
	struct node *ptr,*tmp;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter the position");
	scanf("%d",&l);
	c=length();
	if(l>c)
	{
		printf("\n insertion is not possible");
	}
	else
	{
		tmp=head;
		while(i<l)
		{
			tmp=tmp->next;
			i++;
		}
		printf("enter the data");
		scanf("%d",&ele);
		ptr->data=ele;
		ptr->next=tmp->next;
		tmp->next=ptr;
		printf("\n  node is inserted");
	}
}
void deleterandom()
{
	int l,i=1,c;
	struct node *ptr,*tmp;
	tmp=head;
	printf("enter the position");
	scanf("%d",&l);
	c=length();
	if(l>c)
	{
		printf("\n deletion is not possible");
	}
	else
	{
		while(i<l)
		{
			tmp=tmp->next;
			i++;
		}
		ptr=tmp->next;
		tmp->next=ptr->next;
		free(ptr);
		printf("\n node is deleted");
	}
}
int length()
{
	int c=0;
	struct node *tmp;
	tmp=head;
	while(tmp!=NULL)
	{
		c++;
		tmp=tmp->next;
	}
	return c;
}
void reverse()
{
	int a[100],i=0;
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		a[i]=temp->data;
		i++;
		temp=temp->next;
	}
	for(i=i-1;i>=0;i--)
	printf("%d",a[i]);
}
float avg_minmax()
{
 int a[100],max,min,i=0,c=0;
 struct node *tmp;
 tmp=head;

 while(tmp!=NULL)
 {
   a[i]=tmp->data;
   i++;
   c++;
   tmp=tmp->next;
 }
 min=a[0];
 max=a[0];
 for(i=1;i<c;i++)
 {
   if(a[i]>max)
   max=a[i];
   if(a[i]<min)
   min=a[i];
 }
 
 return((min+max)/2);
}

   
 
