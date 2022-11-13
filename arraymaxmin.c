#include <stdio.h>

int main()
{ 
        // Declaration of variables
	int *arr, arraysize, iteration, small, large; 
         // Getting an input from user as number of array
	printf("Enter the number of elements to insert in an array: "); 
	// User input of array
	scanf("%d", &arraysize); 

	for (iteration= 0; iteration < arraysize; iteration++)
	{         
	        //Getting elements from user
		printf("Enter element %d : ", iteration + 1); 
		scanf("%d", &arr[iteration]); 
	}
         //Assigning arr[0] in small
	small = arr[0]; 
	//Assigning arr[0] in large
	large = arr[0]; 

	for (iteration = 1; iteration < arraysize; iteration++)
	{
		if (arr[iteration] < small)
		{
		        //Assigning the smallest number into a[0]
			small = arr[iteration]; 
		}

		if (arr[iteration] > large)
		{ 
		        //Assigning the Largest number into a[n-1]
			large = arr[iteration]; 
		}
	}
         //Printing largest number
	printf("\nLargest element is : %d", large); 
	//Printing smallest number
	printf("\nSmallest element is : %d", small); 

	return 0;
}
