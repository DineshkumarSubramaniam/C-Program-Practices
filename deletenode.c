#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
//Declaration of sub-function's
struct node *addatbeg(struct node *head ,int data);    
void display (struct node *head);                      
struct node *delete (struct node *head , int data);   


int main()
{
	struct node *head=NULL;
	int choice, data,item;

	while(1)
	{
		printf("List menu\n");
		printf("\n1.Add node at begining\n2.Display the list\n3.Delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);


		switch(choice)
		{
		        //Add a node at begining  of a list
			case 1: 
				printf("\nEnter the element to insert: ");
				scanf("%d",&data);
				head=addatbeg(head,data);
				break;
			
                        //Display a node
			case 2: 
				display(head);
				break;
			
                         //Delete the data
			case 3:
				printf("\nEnter the position to delete : ");
				scanf("%d" ,&data);
				head=delete(head,data);
				break;

			case 4: //Exit
				exit(1);


			default:
				printf("Enter the right choice\n");

		} //End of switch
	} //End of while
	return 0;
} //End of main

// Function to add a node at Begining

struct node *addatbeg(struct node *head ,int data)
{
        // Creating an new node
	struct node*temp;             
	// Creating an node and assigning in temp    
	temp=(struct node *)malloc(sizeof(struct node));  
	// Saving an data in info variable 
	temp->info=data;  
	// Assigning an head to temp->next   
	temp->next=head;  
	// Assigning an temp to head
	head=temp;           
	return head;     
}

// Function to Display a node 
void display (struct node *head)
{
	struct node *temp;
	// condition to check the node is present or not
	if(head==NULL)     
	{
		printf("\nList is empty\n");
		return;
	}
	// Assigning an head into temp
	temp=head;         
	printf("The list of the nodes are : ");
	// Traversing an nodes 
	while(temp!=NULL)  
	{
	        // Printing an nodes
		printf("%d   ",temp->info);   
		temp=temp->next;
	}
	printf("\n\n");
}


// Function to delete a node at given position

struct node *delete (struct node *head , int data)
{
	struct node *temp,*new;
	// condition to check the node is present or not
	if(head==NULL)            
	{
		printf("The list is empty\n");
		return head;
	}

	temp=head;          // Assigning an head into temp 
        // Condition to delete if the position is 1
	if(data==1)        
	{
		head=temp->next;
		free(temp);
		temp=NULL;
		printf("Deletion successfull\n\n");
		return head;
	}


	else
	{
	        // Traversing an nodes till position
		for(int i=1;i<data-1&&temp!=NULL;i++)    
		{
			temp=temp->next;
		}
	}

        // Condition to check wether the position is available or not
	if(temp==NULL)         
	{
		printf("The '%d'th position is not found on the node \n",data);
		return head;
	}


	new=temp->next;
	temp->next=new->next;
	free(new);
	new=NULL;
	printf("Deletion successfull\n");
	return head;
}


