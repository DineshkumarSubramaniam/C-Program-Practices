#include<stdio.h>
#include<stdlib.h>
int main()
{
        // Declaration of variables
	int *arr1,*arr2,*arr3,n,m,iteration1,iteration2;   
	printf("Enter the sizes of two arrays: ");
	scanf("%d %d",&n,&m);
	// Creating a Dynamic memory  
	arr1=malloc(sizeof(int)*n);    
	arr2=malloc(sizeof(int)*m);     
	arr3=malloc(sizeof(int)*(n+m)); 

	printf("Enter %d elements for first array:\n",n);
        // Loop to get an input for array 1
	for(iteration1=0;iteration1<n;iteration1++)   
	{
		scanf("%d",&arr1[iteration1]);
	}
	
	
	printf("Enter %d elements for Second array:\n",m);
	// Loop to get an input for array 2
	for(iteration1=0;iteration1<m;iteration1++)   
	{
		scanf("%d",&arr2[iteration1]);
	}
	iteration1=0;
	
	// Merging an array 1 to array 3
	for(iteration2=0;iteration2<n;iteration2++)   
	{
		arr3[iteration1]=arr1[iteration2];
		iteration1++;
	}
	
	// Merging an array 2 to array 3
	for(iteration2=0;iteration2<m;iteration2++)   
	{
		arr3[iteration1]=arr2[iteration2];
		iteration1++;
	}
	printf("After Merging both Array's: ");
	
	// Printing an merged array
	for(iteration1=0;iteration1<n+m;iteration1++)    
	{
		printf("%d  ",arr3[iteration1]);
	}
	printf("\n");
	return 0;
}
