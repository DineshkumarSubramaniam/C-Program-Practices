#include<stdio.h>
int main()
{
        //Variables declaration
	int positiontotoggle,usernumber; 
	//User input integer
	printf("Enter the input integer: "); 
	scanf("%d",&usernumber); 
	printf("Enter the bit to toggle: ");
	
	//Getting an position from user to toggle
	scanf("%d",&positiontotoggle);  
	printf("Given input integer is : %d",usernumber);
	
	//Toggling the input number
	usernumber=(1<<positiontotoggle-1)^usernumber; 
	
	//Printing the number after the toggle
	printf("\nAfter the %dth bit toggle, The output integer number is %d",positiontotoggle,usernumber); 
	return 0;
}

