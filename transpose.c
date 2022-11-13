#include<stdio.h>
//Assigning row size in Macros
#define ROW 2 
//Assigning column size in Macros
#define COL 5 
int main()
{
         //Assigning integer variable and 2D array
	int iteration1, iteration2, matrix[ROW][COL], transpose[COL][ROW]; 
	printf("Enter matrix with 2 Rows and 5 Column: \n");
	for(iteration1 = 0; iteration1 < ROW; iteration1++)
	{
		for(iteration2 = 0; iteration2 < COL; iteration2++)
		{
		        //Getting an input integer from user to transpose
			scanf("%d", &matrix[iteration1][iteration2]); 
		}
	}
	// creating an transpose
	for(iteration1 = 0; iteration1< ROW; iteration1++)
	{
		for(iteration2 = 0; iteration2 < COL; iteration2++)
		{
		        //Assigning the transpose to an another array
			transpose[iteration2][iteration1] = matrix[iteration1][iteration2]; 
		}
	}
	printf("\nTranspose matrix is: \n");
	
	// printing an transpose
	for(iteration1= 0; iteration1 < COL; iteration1++)
	{
		for(iteration2 = 0; iteration2 < ROW; iteration2++)
		{
		        //Printing an transposed array
			printf("%d ", transpose[iteration1][iteration2]); 
		}
		printf("\n");
	}
	return 0;
}
