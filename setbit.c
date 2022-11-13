#include<stdio.h>
int main()
{
        //Variable declaration
	int positiontoset,usernumber; 
	printf("Enter the input integer: ");
	
	//Getting an input integer from user
	scanf("%d",&usernumber); 
	printf("Enter the bit to set: ");
	
	//Getting an position to set from user
	scanf("%d",&positiontoset); 
	printf("Given input integer is : %d",usernumber);
	
	//Setting the bit
	usernumber=(1<<positiontoset-1)|usernumber; 
	
	//Printing the output after the bit set
	printf("\nAfter the %dth bit set, The output integer number is %d",positiontoset,usernumber); 
	return 0;
}

