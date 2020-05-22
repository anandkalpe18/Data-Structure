# include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
};

struct node*temp,*head=NULL,*new;

void end_insert()
{
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
}

void beg_insert()
{
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	
	new=(struct node*)malloc(sizeof(struct node));
	
	new->data=data;
	new->next=head;
	head=new;
}

void delete()
{
	int pos,data,count=1;
	printf("Enter the position:");
	scanf("%d",&pos);
	
	
		if(pos==1)
	{
		head=head->next;
	}
	else
	{
		temp=head;
		while(count!=pos-1)
		{
			temp=temp->next;
			count++;
		}
		if(temp->next!=NULL)
		{
			temp->next=temp->next->next;
			
		}
		else
		if(temp->next->next==NULL)
		{
			temp->next=NULL;
		}
	}
	
}

void pos_insert()
{
	int pos,data,count=1;
	printf("Enter the position:");
	scanf("%d",&pos);
	printf("Enter the data:");
	scanf("%d",&data);
	
	new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	
	{
		temp=head;
		while(count!=pos-1)
		{
			temp=temp->next;
			count++;
		}
		new->next=temp->next;
		temp->next=new;
	}
}

void display()
{
	int count=0;
	temp=head;
	while(temp->next!=NULL)
	{
		printf("%d ",temp->data);
		count++;
		temp=temp->next;
	}
	printf("%d",temp->data);
	printf("\nTotal length is:%d\n",count+1);
}

void search()
{
	int key,count;
	printf("Enter the key:");
	scanf("%d",&key);
	
	{
		temp=head;
		count=0;
		while(temp->next!=NULL)
		{
			count++;
			if(temp->data==key)
			{
				printf("Key value is found at %d\n",count+1);
			}
			
			temp=temp->next;
			
			
		}
		
	}
	}


void main()
{
	int choice;
	while(1)
	{
	printf("\nEnter the choice:");
	
	printf("\n1.Beg_Insert\n2.End_Insert\n3.Pos_Insert\n4.Delete\n5.Display\n6.Exit\n7.Search\nYour choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			beg_insert();
			break;
			
		case 2:
			end_insert();
			break;
			
		case 3:
			pos_insert();
			break;
			
		case 4:
			delete();
			break;
			
		case 5:
			display();
			break;
			
		case 6:
			printf("You have exited the program");
			exit(1);
			break;	
		
		case 7:
			search();
			break;
			
		default:
			printf("Wrong choice");
			break;
	}
}
}
