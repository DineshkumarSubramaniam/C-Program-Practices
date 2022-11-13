#include <stdio.h>

int main()
{ 
        // Declaration of variables
	int *arr, arraysize,memorysize=0; 
        
        // Getting an input from user as number of array
	printf("Enter the number of elements to be inserted to an array: "); 
	// User input of array
	scanf("%d", &arraysize); 

        //Calculating the memory allocation to array
	memorysize=((sizeof(int))*(arraysize)); 
	// Printing the memory allocation to array
	printf("Memory allocated to the given array is %d Bytes \n",memorysize); 
}
