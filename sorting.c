#include<stdio.h>
#include<stdlib.h>
int main()
{
        //Assigning interger variable
	int *number,iteration1,iteration2,Bits,Temp=0; 
	printf("Enter the size of an array: ");
	//User input as the size of an array
	scanf("%d",&Bits); 
	//Creating memory for the variable
	number=(int*)malloc(Bits*(sizeof(int))); 
	for(iteration1=0;iteration1<Bits;iteration1++)
	{
		printf("Enter the %d array :", iteration1+1);
		//Getting an input integer from the user
		scanf("%d",&number[iteration1]); 
	}
	printf("\n");
	printf("The given array is : ");
	for(iteration1=0;iteration1<Bits;iteration1++)
	{
	        //Printing the given array
		printf("%d  ",number[iteration1]); 
	}
	printf("\n");
	
	//Loop1 for sorting
	for(iteration1=0;iteration1<Bits;iteration1++) 
	{
	        //Loop 2 for sorting
		for(iteration2=iteration1+1;iteration2<Bits;iteration2++) 
		{
		         //Checking for sorting
			if(number[iteration1]>number[iteration2]) 
			{
			        //Sorting an array using an temporary variable
				Temp=number[iteration1]; 
				//Sorting the array
				number[iteration1]=number[iteration2]; 
				//Sorting the array
				number[iteration2]=Temp; 
			}
		}
	}
	printf("\nAfter sorting the array is: ");
	for(iteration1=0;iteration1<Bits;iteration1++)
	{ 
	        //Printing the sorted array
		printf("%d  ",number[iteration1]); 
	}
	printf("\n");
	return 0;
}


