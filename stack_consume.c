#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<unistd.h>
#pragma pack(1)
//Declaring structure
struct node
{
        char name[20];
        int roll;
        struct node *next;
};

//Declaring variables 
int total_size=0;

// Declaring function
void display(struct node *head);
struct node *add_node(struct node *head);
int main()
{
        // Declaring variables
        struct node str,*head=NULL;
        int ch,n;

        
        while(1)
        {         
                printf("\n");
                printf("\n");
                printf("MAIN MENU\n");
                printf("1.Add_node\n2.Display the nodes\n3.Total_size_of_stack\n4.Exit\n");
                printf("Enter the choice: ");
                //__fpurge(stdin);
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:head=add_node(head);
                               break;
                        case 2:display(head);
                               break;
                        case 3:printf("\n$ Total stack consumed is %d\n",total_size);
                               break;
                        case 4:return 0;
                        default:printf("invalid Choice\n");
                }
        }
}

 
// Function to add a node
struct node *add_node(struct node *head)
{
        // Declaration of variables
        struct node *newnode=NULL,*temp=NULL;
        // Creating a memory
        newnode=calloc(1,sizeof(struct node));
        
        // Condition to check whether the stack is consumed or not 
        if(newnode==NULL)
        {
                printf("Not enough memory\n");
        }
        else
        {
                // Calculating the size of stack
                total_size=total_size+sizeof(struct node);
                printf("\n");
                printf("Input datas:\n");
                printf("Enter name: \n");
                __fpurge(stdin);
                // user data's
                gets(newnode->name);
                printf("Enter the roll_number: \n");
                scanf("%d",&newnode->roll);
                
                // Checking whether the node has any list or not 
                if(head==NULL)
                        head=newnode;
                        
                // Condition if the node has any list
                else
                {
                        temp=head;
                        while(temp->next)
                        {
                                temp=temp->next;
                        }
                        temp->next=newnode;
                }

 

        }
        // Returning the head of an list
        return head;
}

 

// Function to display the list
void display(struct node *head)
{
        // Condition to check whether the list is empty or not
        if(head==NULL)
                printf("list is empty\n");
        
        // Printing the list
        else
        {
                printf("\nOUTPUT IS: \n");
                while(head)
                {
                        printf("Roll number is : %d\nName is:%s\n",head->roll,head->name);
                        // Traversing till the last user data's
                        head=head->next;
                        printf("\n");
                }
                //printf("\n");
        }
        printf("\n");
}
 
