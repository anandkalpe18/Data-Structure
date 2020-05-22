#include <stdio.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear =-1;

void insert()
{
	int element;
     if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) 
	 printf("\n Queue is full!! \n");
    else
    {
        if(front == -1) 
		front = 0;
		printf("Enter the element:");
		scanf("%d",&element);
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\nInserted = %d\n", element);
    }
}
int delete()
{
    int element;
    if(front == -1) 
    printf("\nQueue is empty !! \n");
        
     else {
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
        } 
        else {
            front = (front + 1) % SIZE;
            
        }
        printf("\nDeleted element = %d \n", element);
        return(element);
    }
}
void display()
{
    int i;
     if(front == -1)
	 printf(" \n Empty Queue\n");
    else
    {
        
        printf("\n Items = ");
        for( i = front; i!=rear; i=(i+1)%SIZE) {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
       
    }
}

int main()
{
    int choice;
   while(1)
    {  
    printf("Enter the choice:\n1.Insert\n2.Delete\n3.Exit\n4.Display\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		insert();
    		break;
    		
    	case 2:
    		delete();
    		break;
    		
    	case 3:
    		exit(1);
    		break;    	
			
		case 4:
			display();
			break;
	
		default:
			printf("Wrong choice");
			break;
    }
    }
    
    
    
    
}
    


