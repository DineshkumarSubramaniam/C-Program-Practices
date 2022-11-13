#include<stdio.h>
#include<stdlib.h>
struct database
{
	int empid;
	//Creating an structure
	struct database*next; 
};
int main()
{        //Assigning integer variable
	int choice,id,position,data,iteration; 
	struct database *temp, *new,*head=NULL;
	while(1) //Infinite while loop 
	{
		printf("List menu\n");
		// Picking a choice
		printf("1.Add node at given position\t 2.Display\t 3.Exit\n"); 
		printf("Enter the choice\n");
		//Getting an choice from the user
		scanf("%d",&choice); 
		switch(choice)
		{
		         //Add node at given position
			case 1: 
				printf("Enter the position to add\n"); 
				//Getting an position to add
				scanf("%d",&position); 
				printf("Enter the employee id\n");
				//Getting an data to add in an node
				scanf("%d",&id); 
				 // Condition will work if there is 0 nodes are there
				if(head==NULL)   
				{       
				        //Creating an memory to the node
					head=(struct database*)malloc(sizeof(struct database)); 
					//Assigning the id to the node
					head->empid=id; 
					head->next=NULL;
					break;
				}
				temp=head;
				//For loop for traversing and checking does the position is availabe or not
				for(iteration=1;iteration<position-1&&temp!=NULL;iteration++) 
				{
					temp=temp->next;
				}
				//Case to check whether the position is present or not
				if(temp==NULL) 
				{
					printf("Less element in node\n\n\n");
					break;
				}
				//Creating an new memory for the inserting node
				new=(struct database*)malloc(sizeof(struct database)); 
				new->empid=id;
				new->next=temp->next;
				temp->next=new;
				break;

                        //Display the nodes
			case 2: 
				if(head==NULL)
				{       //Printing if the list has nothing to display
					printf("List has no data to display\n\n"); 
					break;
				}
				else
				{
					temp=head;
					printf("Database in this nodes are:\n");
					//Traversing till the last node to display the element
					while(temp!=NULL) 
					{ 
					        //Displaying the nodes
						printf("%d\n",temp->empid);
						//Traversing to find the last node 
						temp=temp->next; 
					}
					break;
				}


			case 3: //Exit
				exit(0);
		}
	}
}

