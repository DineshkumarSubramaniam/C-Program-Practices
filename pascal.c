#include<stdio.h>
int main()
{
        //Declaration of variable's
	int number,iteration1,iteration2,iteration3,count=1; 
	printf("Enter the number of pascal rows to print: ");
	
	//User input for the number of rows
	scanf("%d",&number); 
	
	//Loop to print the given rows
	for(iteration1=0;iteration1<number;iteration1++) 
	{
	        //Loop to print spaces of the triangle
		for(iteration2=1;iteration2<=number-iteration1;iteration2++) 
			printf(" "); 
		//Loop to print the pascal integer
		for(iteration3=0;iteration3<=iteration1;iteration3++) 
		{
			if(iteration1==0||iteration3==0)
			{
				count=1;
			}
			else
			{
			        //Formula to calculate the number of columns in one row
				count=(count*(iteration1-iteration3+1))/iteration3; 
			}
			printf("%d " ,count);
		}
		printf("\n");
	}
}

