#include<stdio.h>
#include<stdlib.h>
 //#include<process.h>  // for exit function
struct node   // creation of node
{
int data;
struct node *next;
};
struct node *head;   // head points to first node
int ele;    // element is being accesed by whple code so accesed globally.. here the data s element
//insertion of functions globally
void insert();
void delet();
void display();
int main()
{
int ch;  // choice from user
do  // prints as it is without checking the condition
{

printf("\n 1 for insert \n 2 for display \n 3 for delete \n 4 for exit \n");
printf(" enter the user choice");
scanf("%d",&ch);
// invoking of the given functions using switch
switch(ch)
{

case 1:
insert();
break;
case 2:
display();
break;
case 3:
  delet();  // delete is pre defined function so we take delet
break;
case 4:
exit(0);
break;
}


}
while(ch!=4);
return 0;

}
// verify the sub program functionality i.e. to check the invoked functions(above the main function) are working properly or not

void insert()
{
struct node *ptr, *tmp;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
  printf("\n overflow of list");
}
else
{
  printf("enter the data");
  scanf("%d",&ele);
      ptr->data=ele;  //  assifnment of first node is inserted(data part is inserted)

  if(head==NULL)
  {
    ptr->next=NULL;    // address part will be null since its the first node
    head=ptr;  // ptr is assigned to head telling that the ptr address is being pointed to head
    printf("\n first node is inserted");
  }
  // if there nodes already present if we want to insert a new node
  else
  {
    tmp=head;  // temp has address of first node
    while(tmp->next!=NULL) //some other node is present before
    {
      tmp=tmp->next;
    }
    tmp->next=ptr;  
    ptr->next=NULL;
    printf("node is inserted");
    }
 
}

}
void display()
{
  //conditions to verify
  struct node *tmp;
  tmp=head;  // address of head is assigned to ptr
  if(tmp==NULL)
  {
    printf("\n list is empty");
  }
    else
    printf("\n the list is");
    while(tmp!=NULL)
    {
      printf("%d",tmp->data);
      tmp=tmp->next;
    }
   
  }

void delet()
{
  // make the given data as null and then free them
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

