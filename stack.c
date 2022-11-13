#include<stdio.h>
#include<stdlib.h>
#define NITEMS 3
#define S_FULL -1
#define S_EMPTY -2
#define S_SUCCESS 0
static int sp=-1;
static int stack[NITEMS];

// Function to add an element
int push(int data)   
{ 
        // checking wheteher the stack is full or not
	if(sp>=(NITEMS-1))   
		return S_FULL;
	else
	{
	        // Adding an node
		stack[++sp]=data;   
		return S_SUCCESS;
	}
}

// Function to delete an element
int pop()    
{
	int data;
	// Checking whether stack is empty or not
	if(sp==-1)   
		return S_EMPTY;
	else
	{ 
	        // For deleting an stack
		data=stack[sp--];   
		return data;
	}
}

// Function to Display an element's
int display()    
{
	int iteration;
	// Checking whether thestack is empty or not
	if(sp==-1)   
	{
		printf("Stack is empty\n");
		return S_EMPTY;
	}
	
	// Traversing and printing the stack available
	for(iteration=sp;iteration>=0;iteration--)    
		printf("The items in the stack are: %d  " ,stack[iteration]);
}


int main()
{
	int choice,item=0,ref,iteration;
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: //Push
				printf("\nEnter the element to insert\n");
				scanf("%d",&item);
				if(ref=push(item) ==S_FULL)
					printf("\nStack is full\n\n");
				break;


			case 2: //Pop
				if(item=pop() ==S_EMPTY)
					printf("\nStack is empty\n");
				else
					printf("\n\nPop successful\n\n");;
				break;


			case 3: //Display
				display();
				break;


			case 4: //Exit
				exit(1);
		}
	}
}




