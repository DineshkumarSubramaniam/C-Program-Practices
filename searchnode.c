#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

//Function declaration's
struct node *addatbeg(struct node *head ,int data);
void display (struct node *head);
void search (struct node *head , int data);


int main()
{
	struct node *head=NULL;
	int choice, data,item;

	while(1)
	{
		printf("\n1.Add node at begining\n2.Display the list\n3.Search\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);


		switch(choice)
		{
			case 1: //Add a node at begining  of a list
				printf("\nEnter the element to insert: ");
				scanf("%d",&data);
				head=addatbeg(head,data);
				break;

			case 2: //Display a node
				display(head);
				break;

			case 3: //Search the data
				printf("\nEnter the element to search : ");
				scanf("%d" ,&data);
				search(head,data);
				break;

			case 4: //Exit
				exit(1);


			default:
				printf("Enter the right choice\n");

		} //End of switch
	} //End of while
	return 0;
} //End of main


// Function to add a node
struct node *addatbeg(struct node *head ,int data)   
{
        // Assigning an variable
	struct node*temp;  
	 // Creating a memory  
	temp=(struct node *)malloc(sizeof(struct node)); 
	// Assigning an data to the other variable
	temp->info=data;  
	temp->next=head;
	// Assigning temp in head
	head=temp; 
	return head;
}


// Function to display the nodes
void display (struct node *head) 
{
	struct node *temp;
	// Condition to check whether the list is empty or not
	if(head==NULL)    
	{
		printf("\nList is empty\n");
		return;
	}
	temp=head;
	printf("The list of the nodes are : ");
	
	// Traversing on nodes
	while(temp!=NULL)  
	{
	        // Displaying the nodes 
		printf("%d   ",temp->info);   
		temp=temp->next;
	}
	printf("\n\n");
}

// Function to search a node
void search (struct node *head , int item)   
{
	struct node *temp=head;
	int pos=1;
	 // Traversing till the position
	while(temp!=NULL)  
	{
	        // Condition to check whether the info in node and search element is same or not
		if(temp->info==item) 
		{
			printf("The item %d found at position %d  ",item,pos);
			return;
		}
		temp=temp->next;
		pos++;
	}
	
	// Displaying if the element is not found
	printf("Item %d not found in the list ",item);    
}


