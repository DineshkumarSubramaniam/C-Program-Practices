#include<stdio.h>
int main()
{ 
        //Integer variable declaration
	int positiontoclear,usernumber; 
	printf("Enter the input integer: ");
	//User input for the integer
	scanf("%d",&usernumber); 
	printf("Enter the bit to clear: ");
	//Getting an position to clear
	scanf("%d",&positiontoclear); 
	printf("Given input integer is : %d",usernumber);
	//Clearing the bit
	usernumber=(~(1<<positiontoclear-1))&usernumber; 
	//Printing after the bit clear
	printf("\nAfter the %dth bit clear, The output integer number is %d",positiontoclear,usernumber); 
	return 0;
}

