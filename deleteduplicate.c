
#include <stdio.h>

#define MAX 100 // Maximum size of the array

int main()
{
	int array[MAX]; // Declares an array of size 100
	int size;          // Total number of elements in array
	int iteration1, iteration2, iteration3;       // Loop control variables

	//Input size of the array 
	printf("Enter size of the array : ");
	scanf("%d", &size);

	//Input elements in the array 
	printf("Enter elements in array : ");
	for(iteration1=0; iteration1<size; iteration1++)
	{
		scanf("%d", &array[iteration1]);
	}

	//Find duplicate elements in array

	for(iteration1=0; iteration1<size; iteration1++)
	{
		for(iteration2=iteration1+1; iteration2<size; iteration2++)
		{
			//If any duplicate found 
			if(array[iteration1] == array[iteration2])
			{
				//Delete the current duplicate element 
				for(iteration3=iteration2; iteration3 < size - 1; iteration3++)
				{
					array[iteration3] = array[iteration3+ 1];
				}

				//Decrement size after removing duplicate element 
				size--;

				//If shifting of elements occur then don't increment j 
				iteration2--;
			}
		}
	}



	// Print array after deleting duplicate elements

	printf("\nArray elements after deleting duplicates : ");
	for(iteration1=0; iteration1<size; iteration1++)
	{
		printf("%d ", array[iteration1]);
	}

	return 0;
}

