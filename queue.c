#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insert();
void delete();
void display();
int queue_a[MAX];
int rear=-1;
int front=-1;

int main()
{
	int choice;
	while(1)
	{
		printf("\nEnter your choice\n");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: //Insert
				insert();
				break;

			case 2: //Delete 
				delete();
				break;

			case 3: //Display
				display();
				break;

			case 4: //Exit
				exit(0);
				break;

		}
	}
}

void insert()
{
        // Declaration of variable
	int iteration;    
	
	// Condition to check whether the Queue is full or not   
	if(rear==MAX-1)    
		printf("Queue is full\n");
	else
	{
	        // Checking whether queue is empty or not
		if(front==-1)    
		{
			front=0;
		}
		printf("\nEnter element\n");
		
		//Getting an input from user
		scanf("%d",&iteration);  
		// Incrementing the rear value
		rear++;                  
		queue_a[rear]=iteration;
		// Message to denote the insertion is done
		printf("Insertion successful\n");     
	}
}


void delete()
{
        // Condition to check whether the list is empty or not
	if(front==-1|| front>rear)   
	{
		printf("The list is Empty\n");
	}
	
	// Deleting the front element
	else    
	{
	        // Deleting the element
		printf("%d ",queue_a[front]);   
		front++;
	}
}


void display()
{
	int iteration;
	
	// Condition to check whether the list is empty or not
	if(front==-1||rear<front)    
	{
		printf("The list is Empty\n");
	}

	else
	{
		printf("Queue is : \n");
	}
	
	// Traversing till the last element
	for(iteration=front;iteration<=rear;iteration++)    
	{
		printf("%d \n",queue_a[iteration]);
	}
	printf("\n");
}
