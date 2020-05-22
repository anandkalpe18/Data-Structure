#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
	struct node*prev;
};

struct node*head,*temp;

void main()
{
	
	int choice=0;
	while(choice!=4)
	{
	printf("Enter the choice:\n");
	printf("1.Insert at beg\n2.Insert at end\n3.Insert at position\n4.display\n5.Exit");
	scanf("%d",&choice);
	
	
		switch(choice){
			case 1:
				insert_beg();
				break;
				
			case 2:
				insert_end();
				break;
				
			case 3:
				insert_pos();
				break;
				
			case 4:
				display();
				break;
				
			case 5:
				exit(0);
				break;
	}}
}





void insert_beg()
{
	int data;
	struct node*ptr;
	printf("Enter the data:");
	scanf("%d",&data);
	
	 ptr=(struct node*)malloc(sizeof(struct node));
	 if(head==NULL)
	 {
	 	ptr->next=NULL;
	 	ptr->prev=NULL;
	 	ptr->data=data;
	 	head=ptr;
	 }
	 else
	 {
	 	ptr->data=data;
	 	ptr->prev=NULL;
	 	ptr->next=head;
	 	head->prev=ptr;
	 	head=ptr;
	 }
}

void insert_end()
{
	int data;
	struct node*ptr,*temp;
	

	ptr=(struct node*)malloc(sizeof(struct node));
	
	
	if(ptr==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
	printf("Enter the data:");
	scanf("%d",&data);
	ptr->data=data;
	
	if(head=NULL)
	{
		ptr->next=NULL;
		ptr->prev=NULL;
		head=ptr;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}
		temp->next=ptr;
		ptr->prev=temp;
		ptr->next=NULL;
	}
}
}

void insert_pos()
{
	struct node*ptr,*temp;
	int data,pos,i;
	ptr=(struct node*)malloc(sizeof(struct node));
	
	if(head==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		temp=head;
		printf("Enter the position:");
		scanf("%d",&pos);
		for(i=0;i<pos;i++)
		{
			temp=temp->next;
		}
		if(temp=NULL)
		{
			printf("You have entered the wrong position");
		}
	}
	printf("Enter the data:");
	scanf("%d",&data);
	ptr->data=data;
	ptr->next=temp->next;
	ptr->prev=temp;	
	temp->next=ptr;
	temp->next->prev=ptr;
	
	
}


void display()
{
	struct node*ptr;
	ptr=head;
	
	while(ptr!=NULL)
	{
		printf("%d",&ptr->data);
		ptr=ptr->next;
	}
}
